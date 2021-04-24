//
//  URI 2166.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double N, resultado, resposta;
    
    cin >> N;
    cout << fixed;
    cout.precision(10);
    
    resultado = 2 + (1 / 2);
    
    if(N == 0){
        resposta = 1;
    }
    else if(N == 1){
        resposta = 1 + 0.5;
    }
    else{
        for(int i = 0; i < N - 1; i++){
            resultado = 2 + (1 / resultado);
        }
        
        resposta = 1 + (1 / resultado);
    }
    
    cout << resposta << endl;
    
    return 0;
}
