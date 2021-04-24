//
//  URI 1116.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, dividendo, divisor;
    float quociente;
    
    cin >> N;
    
    cout << fixed;
    cout.precision(1);
    
    for (int i = 0; i < N; i++) {
        cin >> dividendo >> divisor;
        
        if(divisor == 0){
            cout << "divisao impossivel" << endl;
        }
        else{
            quociente = float(dividendo) / float(divisor);
            
            cout << quociente << endl;
        }
        
    }
    
    return 0;
}
