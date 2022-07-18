//
//  CpaasModel.swift
//  CPaaSAPIiOSSampleApp
//
//  Created by Oleg on 05/04/2022.
//

import Foundation

import CpaaSAPI
import SwiftUI


class CpaasModel: ObservableObject {
    
    let userID: String = "YOUR_USER_ID"
    let custom_domain  = "webrtc-dev.restcomm.com"
    let account_sid    = "AC3c5b4177e5fdd813720bc0d6dd7f057e"
    let auth_token     = "c8b0fca2c59d9198b641ce60fe9b501b"
    let app_sid        = "ClickToCallDevApp"
    let pns_token      = "PNSTOKEN"
    let base_url       = Const.shared.HTTP_URL_AWS
    
    var call: CPaaSCall?
    
    @Published var showCallView: Bool = false
    @Published var isCallMuted: Bool = false
    @Published var isLoadingActivated: Bool = false
    @Published var strStatusCall: String = "Initiating Call ..."
    var statusCall: CallStatus = .callEnd {
        didSet {
            switch statusCall
            {
            case .calling:
                strStatusCall = "Calling ..."
            case .initCall:
                strStatusCall = "Initiating Call ..."
            case .connected:
                strStatusCall = "Connected"
            case .callEnd:
                strStatusCall = "End Call"
            case .callReconnecting:
                strStatusCall = "Reconnecting"
                
            }
        }
    }
    
    func register() {
        let settings = CPaaSAPISettings(customDomain: custom_domain, accountSid: account_sid, authToken: auth_token, appSid: app_sid, clientId: userID, PNSToken: pns_token, baseURL: base_url)
        CPaaSAPI.shared.register(settings: settings, cpaasAPICb: self)
    }
    
    
    func start() {
        statusCall = .initCall
        CPaaSAPI.shared.voice.create { [weak self] createResult in
            guard let self = self else { return }
            
            createResult.fold { callId in
                self.connect(callId: callId! as String)
            } onFailure: { error in
                print("Failed to create call - not registered")
            }
        }
    }
    
    private func connect(callId: String) {
        
        let api = CPaaSAPI.shared.voice

        api.connect(callId: callId, callOptions: CallOptions(audio: true)) { [weak self] connectResult in
            guard let self = self else { return }
            connectResult.fold { newCall in
                self.call = newCall
                newCall?.eventListener = self
                self.showCallView = true
            } onFailure: { callStartError in
                print("Failed connecting to meeting: \(callStartError.debugDescription)")
                switch callStartError {
                case is CallStartError.CallAlreadyExistError:
                    break
                case is CallStartError.MicrophonePermissionError:
                    break
                default:
                    break
                }
            }

        }
    }
    
    func endCall(){
        guard let call = call  else{return}
        call.endCall()
        
    }
    
    func mute() {
        guard let call = call  else{return}
        if !isCallMuted {
            call.mute { succeed in
                print("called mute, succeed: \(succeed)")
                if succeed == true {
                    self.isCallMuted = true
                }
            }
        } else {
            call.unMute { succeed in
                print("called unMute, succeed: \(succeed)")
                if succeed == true {
                    self.isCallMuted = false
                }
            }
        }
    }
    
    func endCallHandler() {
        statusCall = .callEnd
        showCallView = false
        call = nil
        print("Call end")
    }
}


extension CpaasModel: CPaaSAPICb {
    func onIncomingCall(callId: String, callerId: String, serviceType: ServiceType) {
        statusCall = .initCall
        //When receiving an incoming call you can accept it by calling CPaaSAPI.shared.connect or reject it by calling CPaaSAPI.shared.reject
        connect(callId: callId)
    }
    
    func onRegistrationComplete(success: Bool) {
        print("Registration finished: \(success)")
    }
}

extension CpaasModel: CPaaSCallEvents {
    func onCallEnd(reason: CPaaSReason) {
        endCallHandler()
    }
    
    func onConnected() {
        print("Call connected")
        isLoadingActivated = false
        statusCall = .connected
    }
    
    func onConnectedFailure(reason: CPaaSReason) {
        endCallHandler()
        print("Connection failed the reson is :\(reason)")
    }
    
    func onReconnecting(reason: CPaaSReason) {
        print("Call on reconnecting proces the reason of reconnecting is :\(reason)")
        statusCall = .callReconnecting
    }
    
    func onRinging() {
        print("Callee got your call, waiting for his action (accept/reject)")
        statusCall = .calling
    }
}


enum CallStatus: String {
    case initCall
    case calling
    case connected
    case callEnd
    case callReconnecting
}
