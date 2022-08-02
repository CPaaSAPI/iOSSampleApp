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
    
    // To get account_sid & auth_token please visit this link:
    // https://usstaging.restcomm.com/docs/api/overview.html#_authentication
    let userID: String = "YOUR_USER_ID"
    let custom_domain  = "webrtc-dev.restcomm.com"
    let account_sid    = "<Account SID from restcomm>"
    let auth_token     = "<Auth Token from restcomm>"
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
    
    
    /// You should check that you are registered before starting a call
    func start() {
        statusCall = .initCall
        //create a callId for connecting to a meeting
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
        
        //Connect to a call with the call id you created or received
        api.connect(callId: callId, callOptions: CallOptions(audio: true)) { [weak self] connectResult in
            guard let self = self else { return }
            connectResult.fold { newCall in
                self.call = newCall
                newCall?.eventListener = self
                self.showCallView = true
            } onFailure: { callStartError in
                print("Failed connecting to meeting: \(callStartError.debugDescription)")
                //From error type you can understand what caused registration to fail
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
    func onRegistrationState(state: REGISTRATION_STATE) {
        switch state {
        case .registerFailed:
            print("Registration failed")
        case .registered:
            print("Registration succeeded")
        default:
            break
        }
    }
    
    func onIncomingCall(callId: String, callerId: String, serviceType: ServiceType) {
        statusCall = .initCall
        //When receiving an incoming call you can accept it by calling CPaaSAPI.shared.connect or reject it by calling CPaaSAPI.shared.reject
        connect(callId: callId)
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
        print("Connection failed the reason is :\(reason)")
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
