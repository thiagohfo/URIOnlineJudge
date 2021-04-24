//
//  URI 2152.cpp
//  Pratica
//
//  Created by Thiago Henrique on 11/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, H, M, O;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> H >> M >> O;
        
        if(H < 10){
            cout << "0" << H << ":";
        }
        else{
            cout << H << ":";
        }
        
        if(M < 10){
            cout << "0" << M << " - ";
        }
        else{
            cout << M << " - ";
        }
        
        if(O == 1){
            cout << "A porta abriu!" << endl;
        }
        else{
            cout << "A porta fechou!" << endl;
        }
    }
    
    return 0;
}
