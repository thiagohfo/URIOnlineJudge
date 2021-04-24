//
//  URI 2663.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 16/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    int competidores = 0, classificados = 0, cont_classificados = 0, temp = 0;
    
    cin >> competidores;
    cin >> classificados;
    
    cont_classificados = classificados;
    
    int pontuacoes[competidores];
    
    for (int i = 0; i < competidores; i++) {
        cin >> pontuacoes[i];
    }
    
    for (int i = 0; i < competidores; i++) {
        temp = i;
        
        for (int j = i + 1; j < competidores; j++) {
            if (pontuacoes[j] > pontuacoes[temp]) {
                temp = j;
            }
        }
        
        int aux = pontuacoes[i];
        pontuacoes[i] = pontuacoes[temp];
        pontuacoes[temp] = aux;
    }
    
    for (int i = classificados; i < competidores; i++) {
        if (pontuacoes[i - 1] == pontuacoes[i]) {
            cont_classificados++;
        } else {
            break;
        }
    }
    
    cout << cont_classificados << endl;
    
    return 0;
}
