//
//  URI 2161.cpp
//  Pratica
//
//  Created by Thiago Henrique on 14/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double N, resultado = 0, resposta;
    
    cin >> N;
    cout << fixed;
    cout.precision(10);
    
    resultado = (1 / 6) + 6;
    
    for(int i = 0; i < N - 1; i++){
        resultado = 6 + (1 / resultado);
    }
    
    if(N > 0){
        resposta = (1 / resultado) + 3;
    }
    else{
        resposta = (1 / 6) + 3;
    }
    
    cout << resposta << endl;
    
    return 0;
}
