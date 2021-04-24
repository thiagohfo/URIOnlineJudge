//
//  URI 1957.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

char hexadecimal(int numero){
    char letras[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    
    return letras[numero - 10];
}

int main(){
    long long int N, resto;
    stringstream restos;
    string resposta, temp_resto, temp_N;
    
    cin >> N;
    
    if(N < 16 && N > 9){
        resposta = hexadecimal(N);
        
        cout << resposta << endl;
        
        return 0;
    }
    else if(N < 10){
        cout << N << endl;
    }
    
    while(N >= 16){
        resto = N % 16;
        N /= 16;
        
        if(resto < 16 && resto > 9){
            temp_resto = hexadecimal(resto);
            restos << temp_resto;
        }
        else{
            restos << resto;
        }
        
        if(N < 16 && N > 9){
            temp_N = hexadecimal(N);
            restos << temp_N;
        }
        else if(N < 10){
            restos << N;
        }
    }
    
    resposta = restos.str();
    reverse(resposta.begin(), resposta.end());
    
    cout << resposta << endl;
    
    return 0;
}
