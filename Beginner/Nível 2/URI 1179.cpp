//
//  URI 1179.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <array>
#include <iostream>

using namespace std;

void exibir_vetor(array<int, 5> vetor, string tipo){
    for (int i = 0; i < 5; i++) {
        cout << tipo << "[" << i << "] = " << vetor[i] << endl;
    }
}

int main(){
    array<int, 5> pares, impares;
    int contP = 0, contI = 0, numero;
    string tipo;
    
    for(int i = 0; i < 15; i++) {
        cin >> numero;
        
        if(numero % 2 == 0){
            pares[contP] = numero;
            contP++;
            
            if(contP >= 5){
                contP = 0;
                
                exibir_vetor(pares, "par");
            }
        }
        else{
            impares[contI] = numero;
            contI++;
            
            if(contI >= 5){
                contI = 0;
                
                exibir_vetor(impares, "impar");
            }
        }
    }
    
    for (int i = 0; i < contI; i++) {
        cout << "impar[" << i << "] = " << impares[i] << endl;
    }
    
    for (int i = 0; i < contP; i++) {
        cout << "par[" << i << "] = " << pares[i] << endl;
    }
    
    return 0;
}
