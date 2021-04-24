//
//  URI 1168.cpp
//  Pratica
//
//  Created by Thiago Henrique on 14/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, total_led = 0;
    string V;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> V;
        
        for(int j = 0; j < V.size(); j++){
            switch(V[j]){
                case '1':
                    total_led += 2;
                    break;
                case '2':
                    total_led += 5;
                    break;
                case '3':
                    total_led += 5;
                    break;
                case '4':
                    total_led += 4;
                    break;
                case '5':
                    total_led += 5;
                    break;
                case '6':
                    total_led += 6;
                    break;
                case '7':
                    total_led += 3;
                    break;
                case '8':
                    total_led += 7;
                    break;
                case '9':
                    total_led += 6;
                    break;
                default:
                    total_led += 6;
            }
        }
        
        cout << total_led << " leds" << endl;
        
        total_led = 0;
    }
    
    return 0;
}
