//
//  CpaasModel.swift
//  CPaaSAPIiOSSampleApp
//
//  Created by Oleg on 05/04/2022.
//

import Foundation

import CpaasAPI
import SwiftUI


class CpaasModel: ObservableObject {
    
let custom_domain = "webrtc-dev.restcomm.com"
let app_token     = "token"
let account_sid   = "sid"
let app_sid       = "ClickToCallDevApp"
let pns_token     = "PNSTOKEN"
let base_url      = Const.shared.WS_URL_AWS
var call: ICall?
@Published var showCallView: Bool = false
@Published var isCallMuted: Bool = false
    func register(userID: String){
        let settings = CPaaSAPISettings(customDomain: custom_domain, accountSid: account_sid, accountToken: app_token , appSid: app_sid, clientId: userID, PNSToken:pns_token, BaseURL: base_url)
            CPaaSAPI.shared.register(settings: settings, cpaasAPICb: self)
        }
   
    
    func start(destinationID: String) {
        call = CPaaSAPI.shared.startCall(destinationId: destinationID, callOptions:  CallOptions(audio: true))
        guard let call = call  else{return}
        call.eventListener = self
        showCallView = true
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

}


extension CpaasModel: CPaaSAPICb {

    func onIncomingCall(call: ICall) {
        print("When there is an incoming call, you can use the  ``call`` object to accept it and call ``call.join()`` to join it.")
        self.call = call
        self.call!.eventListener = self
        self.call!.joinCall()
        showCallView = true
    }
    
    func onRegistrationComplete(success: Bool) {
        print("Registration is successful, ready to start call")
    }
}

extension CpaasModel: ICallEvents {
    func onCallEnd(reason: Reason?) {
        showCallView = false
        call = nil
        print("Call end")
    }
    
    func onConnected() {
        print("Call connected")
    }
    
    func onConnectedFailure(reason: Reason) {
        showCallView = false
        call = nil
        print("Connection failed the reson is :\(reason)")
    }
    
    func onReconnecting(reason: Reason) {
        print("Call on reconnecting proces the reason of reconnecting is :\(reason)")
    }
    
    func onRinging() {
        print("Callee got your call, waiting for his action (accept/reject)")
    }
}


