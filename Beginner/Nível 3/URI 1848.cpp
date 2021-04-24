//
//  URI 1848.cpp
//  Pratica
//
//  Created by Thiago Henrique on 23/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binario(int numero_tmp[], int tamanho){
    int resultado_temp = 0;
    
    for(int i = 0; i < tamanho; i++){
        resultado_temp += numero_tmp[((tamanho - i) - 1)] * (pow(2, i));
    }
    
    return resultado_temp;
}

int main(){
    int resultado = 0, cont = 0;
    string corvo;
    
    while(cont < 3){
        getline(cin, corvo);
        
        if(corvo == "caw caw"){
            cout << resultado << endl;
            
            resultado = 0;
            cont++;
        }
        else{
            int numero[corvo.size()];
            
            for(int i = (corvo.size() - 1); i >= 0; i--){
                if(corvo[i] == '*'){
                    numero[i] = 1;
                }
                else{
                    numero[i] = 0;
                }
            }
           
            resultado += binario(numero, corvo.size());
            
        }
    }
    
    return 0;
}
