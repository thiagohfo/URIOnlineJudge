//
//  URI 1150.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int X, Z, qtd = 0, soma_temp = 0;
    
    cin >> X;
    cin >> Z;
    
    while(Z <= X){
        cin >> Z;
    }
    
    for (int i = X; i < Z; i++) {
        soma_temp += i;
        qtd++;
        
        if(soma_temp > Z){
            cout << qtd << endl;
            
            return 0;
        }
    }
    
    return 0;
}
