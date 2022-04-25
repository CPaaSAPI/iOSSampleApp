//
//  RegistrationView.swift
//  CPaaSAPIiOSSampleApp
//
//  Created by Oleg on 05/04/2022.
//

import SwiftUI
import CpaasAPI
import Combine
let lightGreyColor = Color(red: 239.0/255.0, green: 243.0/255.0, blue: 244.0/255.0, opacity: 1.0)
let bgButtonColor = Color(red:50.0/255.0, green: 64.0/255.0, blue: 73.0/255.0, opacity: 1.0)
struct MainView: View {
    var userID: String = "YOUR_USER_ID"
    var destinationID: String = "DESTINATION_ID"

    @EnvironmentObject var model :CpaasModel
    var body: some View {
        
        NavigationView {
            VStack(alignment: .center, spacing: 10.0){
                VStack{
                    Button (action: {
                        UIApplication.shared.endEditing()
                        model.register(userID: userID)
                    } ){
                        Text("Registration")
                    }
                    .font(.headline)
                    .frame(width: 250.0, height: 60.0).foregroundColor(.white)
                    .background(bgButtonColor)
                    .cornerRadius(8.0)
                    .padding(.bottom,10)
                    
                    Button (action: {
                        UIApplication.shared.endEditing()
                        model.start(destinationID: destinationID)
                    } ){
                        Text("Start Call")
                    }
                    
                    .font(.headline)
                    .frame(width: 250.0, height: 60.0).foregroundColor(.white)
                    .background(bgButtonColor)
                    .cornerRadius(8.0)
                   
    
                }
                NavigationLink(destination:  CallView().environmentObject(model), isActive: $model.showCallView) {}.isDetailLink(false)

            }
            .padding()
            
           
        }
   
    }

}

extension UIApplication {
    func endEditing() {
        sendAction(#selector(UIResponder.resignFirstResponder), to: nil, from: nil, for: nil)
    }
}

#if DEBUG
struct RegistrationView_Previews: PreviewProvider {
    static var previews: some View {
        MainView()
            .padding(.horizontal)
    }
}
#endif
