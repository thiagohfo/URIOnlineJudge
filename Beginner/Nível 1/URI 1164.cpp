//
//  URI 1164.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, soma = 0, numero;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> numero;
        
        for (int j = 1; j < numero; j++) {
            if(numero % j == 0){
                soma += j;
            }
        }
        
        if(soma == numero){
            cout << numero << " eh perfeito" << endl;
        }
        else{
            cout << numero << " nao eh perfeito" << endl;
        }
        
        soma = 0;
    }
    
    return 0;
}
