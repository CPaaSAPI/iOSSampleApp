//
//  CallView.swift
//  CPaaSAPIiOSSampleApp
//
//  Created by Oleg on 05/04/2022.
//

import SwiftUI

struct CallView: View {
   
    @EnvironmentObject var model :CpaasModel
    
    var body: some View {
        
        VStack(alignment: .center){
           
            Spacer()
            HStack{

                Spacer()
                Button (action: {
                    model.mute()
                } ){
                    Image(model.isCallMuted ? "ic_bg_call_mute" : "ic_bg_call_unmute")
                        .resizable()
                        .aspectRatio(contentMode: .fit)
                        .frame(width: 40, height: 40)
                }
                .frame(width: 70, height: 70)
                .background(Color(red: 54/255.0, green: 64/255.0, blue: 72/255.0))
                .clipShape(Circle())
                Spacer()
                Button (action: {
                    model.endCall()
                } ){
                    Image("endWhite")
                        .resizable()
                        .aspectRatio(contentMode: .fit)
                        .frame(width: 40, height: 40)
                }
                .frame(width: 70, height: 70)
                .background(Color(red: 172/255.0, green: 49/255.0, blue: 47/255.0))
                .clipShape(Circle())
                Spacer()
            }
            .padding(.bottom, 30)
        }
        
        .navigationBarHidden(true)
        .navigationBarBackButtonHidden(true)
    }
}

#if DEBUG
struct MeetingView_Previews: PreviewProvider {
    static var previews: some View {
        CallView()
    }
}
#endif
