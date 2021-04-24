//
//  URI 1091.cpp
//  Pratica
//
//  Created by Thiago Henrique on 20/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int PD_X, PD_Y, R_X, R_Y, K;
    
    while(cin >> K){
        if(K == 0){
            return 0;
        }
        
        cin >> PD_X >> PD_Y;
        
        for(int i = 0; i < K; i++){
            cin >> R_X >> R_Y;
            
            if(R_X > PD_X){
                if(R_Y > PD_Y){
                    cout << "NE" << endl;
                }
                else if(R_Y < PD_Y){
                    cout << "SE" << endl;
                }
                else{
                    cout << "divisa" << endl;
                }
            }
            else if(R_X < PD_X){
                if(R_Y > PD_Y){
                    cout << "NO" << endl;
                }
                else if(R_Y < PD_Y){
                    cout << "SO" << endl;
                }
                else{
                    cout << "divisa" << endl;
                }
            }
            else{
                cout << "divisa" << endl;
            }
        }
    }
    
    return 0;
}
