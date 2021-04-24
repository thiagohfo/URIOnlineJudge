//
//  URI 2126.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string numero, sequencia;
    int subsequencias = 0, posicao = 0, temp_posicao = 0, casos = 1;
    bool achou = false;
    
    while(cin >> numero){
        cin >> sequencia;
        
        cout << "Caso #" << casos << ":" << endl;
        
        while(true){
            if(sequencia.find(numero, temp_posicao) != string::npos){
                posicao = sequencia.find(numero, temp_posicao);
                temp_posicao = posicao + 1;
                subsequencias++;
                achou = true;
            }
            else{
                break;
            }
        }
        
        if(achou){
            cout << "Qtd.Subsequencias: " << subsequencias << endl;
            cout << "Pos: " << ++posicao << endl;
        }
        else{
            cout << "Nao existe subsequencia" << endl;
        }
        
        cout << endl;
        
        temp_posicao = 0;
        subsequencias = 0;
        achou = false;
        casos++;
    }
    
    return 0;
}
