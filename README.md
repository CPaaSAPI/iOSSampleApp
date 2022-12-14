## CPaaS iOS SDK Integration Guide

## Getting Started
This guide provides you with an overview of the key objects you will use
to build your Voice application using the CPaaSAPI SDK.  
The CPaaSAPI SDK exposes voice services that allow you to call or receive a call from a CPaaS application
## Prerequisites
### Restcomm account and authentication parameters

1. To add a Click-To-Call capability to your application, you need an
   active Restcomm account. You can find more info
   [here](https://www.restcomm.com/docs/getting-started.html)
2. After you sign up with Restcomm, you can find your _Account SID_ and
   _Auth Token_ by navigating to _Your profile --> Account_ in the Restcomm
   Console.

### Platform Prerequisites
- Xcode v.12.0+
- iOS v.13.0+

### CPaaS API SDK Sample application
You can find our sample application on [GitHub](https://github.com/CPaaSAPI/iOSSampleApp).  
This sample code demonstrates how to integrate the CPaaSAPI SDK with a swift application.

### Getting the CPaaSAPI SDK
The CPaaS API iOS SDK is available for download [here](https://github.com/CPaaSAPI/iOSSampleApp/tree/main/CPaaSAPIiOSSampleApp/CpaaSAPI.framework).

#### Manual Install
Follow the steps below to manually install the SDK.

1. Unpack _CPaaSAPI.framework_, _WebRTC.framework_, and __AWSMobileClient.framework_ in your project.
2. Drag and drop these files onto the **Frameworks, Libraries, and Embedded Content** section that is located in Xcode under **General** tab.
3. verify that "Copy items if needed" is checked and press Finish.
4. verify that "Embed & Sign" is checked.

#### Pod Install
CPaaSAPI iOS SDK can be integrated using cocoapods by specifying the following in your podfile:

target 'Your project target' do
pod 'CpaaSAPI_iOS'
end

### Permission
Add the following permission to your applications _info.plist_:  
**Privacy - Microphone Usage Description** 

### Importing the framework

To import the framework add the following to your application.

```objectivec
import CPaaSAPI
```

## Initializing the SDK

To start using the SDK, you should register it by using the `CPaaSAPI.shared.register()` method, along with the parameters below.



```swift
let settings = CPaaSAPISettings(
            customDomain: "api.your-organization.com",
            accountSid: "xxxxxxx", 
            authToken: "xxxxxxx", 
            appSid: "xxxxxxx", 
            clientId: "xxxxxxx", 
            PNSToken: "xxxxxxx",
            baseURL: "https://xxxxxxx.com")
            
CPaaSAPI.shared.register(settings: settings, cpaasAPICb: self)

extension <CLASS_NAME>: CPaaSAPICb {

    func onIncomingCall(callId: String, callerId: String, serviceType: ServiceType) {
        //TODO: - Listening to incoming calls
    }
    
    func onRegistrationComplete(success: Bool) {
        //TODO: - You can start your call from here
    }
}
```

Note:
* ```CLASS_NAME``` stands for the class you will receive the callback to.
* This should be done once in a session
* You should do this as soon as the application opens, it will save you time during the call connection.



##### Authorization and Web Socket Connection
If the application registration was successful, the following events will take place:

1. Authorization – Our servers will authenticate and authorize the use of the SDK
2. Web socket connection initialization – the SDK will initialize the web socket connection.
3. Once the registration process has completed, you will get a call-back that indicates  if it was successful or not.  

Note: The steps above must be successfully completed. Failure in any of the above procedures will prevent the SDK from working properly.


## Starting a call
To initiate a call simply call **CPaaSAPI.voice.create(...)** and **CPaaSAPI.voice.connect(...)**.  
``create()``: creates and returns a call id which you can use or share with others  
``connect()``: starts the actual connection to the call and returns a  ``CPaaSCall`` obj.

```objectivec
// destination is optional for P2A/A2P, but is mandatory for P2P use case, if given it shall be a valid string without special characters
var callOptions = CallOptions(audio = true, destination = destId)
CPaaSAPI.shared.voice.create { createResult in
    createResult.fold { callId in
        CPaaSAPI.shared.voice.connect(callId: callId, callOptions: callOptions) { connectResult in
            connectResult.fold { newCall in
                self.call = newCall
                // Here you can:
                // show call UI
                // Start listen to call events: newCall.eventListener = self
            } onFailure: { callStartError in
                print("Failed connecting to call: \(callStartError.debugDescription)")
            }
        }
    } onFailure: { error in
        print("Failed to create call - not registered")
    }
}
```
### The CPaaSCall Object

`CPaaSCall` is an API object that returns as a result of the ``connect()`` method. 

The `CPaaSCall` lets you perform actions on an **active call** such as muting or ending the call.
```objectivec
call.mute() //mute the current call
call.unmute() //unmute the current call
call.end() //end the current call
```

## Answering an Incoming Call
To answer an incoming call, you need to listen to the ``onIncomingCall`` callback.

When there is an incoming call, you can use the  ``callId`` to connect or reject the call.

Note: You should not use the ``create()`` method in this case.

```objectivec
func onIncomingCall(callId: String, callerId: String, serviceType: ServiceType) {
    //accept the call
    CPaaSAPI.shared.voice.connect(callId: callId, callOptions: callOptions) { connectResult in
            connectResult.fold { newCall in
                self.call = newCall
                // Here you can:
                // show call UI
                // Start listen to call events: newCall.eventListener = self
            } onFailure: { callStartError in
                print("Failed connecting to call: \(callStartError.debugDescription)")
            }
        }   
}
```
To reject the call:
```objectivec
CPaaSAPI.shared.voice.reject(callId: callId)
```
When working with callKit, first use ```reportNewIncomingCall``` and then call ```connect``` or ```reject``` depending on the ```CXCallAction```.

### Listening to call events

You can listen to a various of call events such as: call connected, call ringing, connection failed, call ended and call reconnecting.


```objectivec
call.eventListener = self

extension CLASS_NAME: CPaaSCallEvents {

    func onRinging() {
        // callee got your call, wait for his action (accept/reject)
    }
    
    func onConnected() {
        // call connected you have audio here
    }
    
    func onCallEnd(reason: CPaaSReason) {
        // call end, you can remove call UI
    }

    func onConnectedFailure(reason: CPaaSReason) {
        // connection failed, check reason
    }

    func onReconnecting(reason: CPaaSReason) {
        // call on reconnecting process, show notification for user
    }  
}
```

### API Limitations
Be aware that all API methods must be called on the main thread.
