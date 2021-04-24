//
//  URI 1159.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int X, soma = 0;
    
    while(cin >> X){
        if(X == 0){
            return 0;
        }
        else if(X % 2 != 0){
            X++;
        }
        
        for(int i = 0; i < 5; i++){
            soma += X;
            X += 2;
        }
        
        cout << soma << endl;
        
        soma = 0;
    }
    
    return 0;
}
