//
//  RegistrationView.swift
//  CPaaSAPIiOSSampleApp
//
//  Created by Oleg on 05/04/2022.
//

import SwiftUI
import CpaaSAPI
let lightGreyColor = Color(red: 239.0/255.0, green: 243.0/255.0, blue: 244.0/255.0, opacity: 1.0)
let bgButtonColor = Color(red:50.0/255.0, green: 64.0/255.0, blue: 73.0/255.0, opacity: 1.0)
struct MainView: View {

    @EnvironmentObject var model :CpaasModel
    var body: some View {
        NavigationView {
            VStack(spacing: 50) {
               Image("Mavenir-Logo")

                VStack(spacing: 10) {
                    Button (action: {
                        model.register()
                    } ){
                        Text("Registration")
                            .font(.headline)
                            .frame(width: 250.0, height: 60.0).foregroundColor(.white)
                            .background(bgButtonColor)
                            .cornerRadius(8.0)
                    }
                    Button (action: {
                        model.start()
                    } ){
                        Text("Start Call")
                            .font(.headline)
                            .frame(width: 250.0, height: 60.0).foregroundColor(.white)
                            .background(bgButtonColor)
                            .cornerRadius(8.0)
                    }
                }
                
                Spacer()
                NavigationLink(destination:  CallView().environmentObject(model), isActive: $model.showCallView) {}.isDetailLink(false)
            }
        }
    }
}

