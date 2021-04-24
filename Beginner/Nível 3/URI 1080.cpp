//
//  URI 1080.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long int valor, maior = 0;
    int posicao = 0, contador = 0;
    
    while(cin >> valor){
        contador++;
        
        if(valor > maior){
            maior = valor;
            posicao = contador;
        }
    }
    
    cout << maior << "\n"
        << posicao << endl;
    
    return 0;
}
