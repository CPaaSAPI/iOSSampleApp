//
//  CallView.swift
//  CPaaSAPIiOSSampleApp
//
//  Created by Oleg on 05/04/2022.
//

import SwiftUI

struct CallView: View {
   
    @EnvironmentObject var model: CpaasModel
    
    var body: some View {
        
        VStack(alignment: .center){
           
            Text("CPaaS Call")
                .foregroundColor(Color(hex: "#005C97"))
                .font(.custom("Lato-Regular", size: 28))
                .padding(.top, 73)
                .padding(.bottom, 5)
            Divider().frame( height: 2, alignment: .center).background(Color(hex: "#EC1B29")).padding([.trailing, .leading], 50.0)
            Spacer()
            if model.isLoadingActivated {
                EscapingAnimationTest_Inner()
            }
           
            Text(model.strStatusCall)
            Spacer()
            
            HStack() {
                Spacer()
                Button (action: {
                    model.mute()
                } ){
                    Image(model.isCallMuted ? "mute" : "unmute")
                        .resizable()
                        .frame(width: 75, height: 75)
                }
                Spacer()
                Button (action: {
                    model.endCall()
                } ){
                    Image("end_call")
                        .resizable()
                        .frame(width: 75, height: 75)
                }
                Spacer()
            }
            .padding(.bottom, 30)
        }
        .onAppear {
            model.isLoadingActivated = true
        }
        
        .navigationBarHidden(true)
        .navigationBarBackButtonHidden(true)
    }
}


struct EscapingAnimationTest_Inner: View {
    @State var degrees: CGFloat = 0
    var body: some View {
        Circle()
            .trim(from: 0.0, to: 0.6)
            .stroke(AngularGradient(gradient: .init(colors: [Color.gray.opacity(0.2),Color.gray.opacity(0.1)]), center: .zero),style: StrokeStyle(lineWidth: 3, lineCap: .butt))
            .frame(width: 35, height: 25)
            .rotationEffect(Angle(degrees: Double(degrees)))
            .animation(Animation.linear(duration: 1).repeatForever(autoreverses: false), value: degrees)
            .onAppear() {
                DispatchQueue.main.async {
                    withAnimation(Animation.linear(duration: 1).repeatForever(autoreverses: false)) {
                        degrees = 360
                    }
                }
            }
    }
}
