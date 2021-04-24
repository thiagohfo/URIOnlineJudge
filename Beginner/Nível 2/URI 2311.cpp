//
//  URI 2311.cpp
//  Pratica
//
//  Created by Thiago Henrique on 20/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double notas[7], partida = 0, maior = 0, menor = 11, total = 0;
    int competidores;
    string nome;
    
    cin >> competidores;
    
    for(int i = 0; i < competidores; i++){
        cin >> nome;
        cin >> partida;
        
        menor = 11;
        maior = 0;
        
        for(int j = 0; j < 7; j++){
            cin >> notas[j];
            
            total += notas[j];
            
            if(notas[j] > maior){
                maior = notas[j];
            }
            
            if(notas[j] < menor){
                menor = notas[j];
            }
        }
        
        total -= menor;
        total -= maior;
        
        total *= partida;
        
        cout << fixed;
        cout.precision(2);
        cout << nome << " " << total << endl;
        
        total = 0;
    }
    
    return 0;
}
