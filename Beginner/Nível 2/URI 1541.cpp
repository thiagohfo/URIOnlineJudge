//
//  URI 1541.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int A, B, C, area, lado;
    
    while(true){
        cin >> A;
        
        if(A == 0){
            return 0;
        }
        else{
            cin >> B >> C;
            
            area = A * B;
            lado = (area * 100) / C;
            lado = pow(lado, .5);
            
            cout << lado << endl;
        }
    }
    
    return 0;
}
