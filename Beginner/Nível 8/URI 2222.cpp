//
//  URI 2222.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <bitset>
#include <algorithm>

using namespace std;

int main(){
    int instancias, qtd_conjuntos, qtd_operacoes, qtd_elementos, elemento;
    int conjunto_escolhido1, conjunto_escolhido2, operacao;
    
    cin >> instancias;
    
    for(int i = 0; i < instancias; i++){
        cin >> qtd_conjuntos;
        
        bitset<60> conjuntos[qtd_conjuntos];
        
        for(int j = 0; j < qtd_conjuntos; j++){
            cin >> qtd_elementos;
            
            for(int k = 0; k < qtd_elementos; k++){
                cin >> elemento;
            
                conjuntos[j][elemento] = 1;
            }
        }
        
        cin >> qtd_operacoes;
        
        for(int j = 0; j < qtd_operacoes; j++){
            cin >> operacao >> conjunto_escolhido1 >> conjunto_escolhido2;
            
            bitset<60> resultado;
            
            conjunto_escolhido1--;
            conjunto_escolhido2--;
            
            if(operacao == 1){
                resultado = conjuntos[conjunto_escolhido1] & conjuntos[conjunto_escolhido2];
            }
            else{
                resultado = conjuntos[conjunto_escolhido1] | conjuntos[conjunto_escolhido2];
            }
            
            cout << resultado.count() << endl;
            
            resultado.reset();
        }
        
    }
    
    return 0;
}
