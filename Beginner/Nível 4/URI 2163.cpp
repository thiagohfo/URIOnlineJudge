//
//  URI 2163.cpp
//  Pratica
//
//  Created by Thiago Henrique on 14/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int Linha, Coluna, RLinha = 0, RColuna = 0;
    
    cin >> Linha >> Coluna;
    
    int terreno[Linha][Coluna];
    
    for(int i = 0; i < Linha; i++){
        for(int j = 0; j < Coluna; j++){
            cin >> terreno[i][j];
        }
    }
    
    for(int i = 1; i < Linha - 1; i++){
        for(int j = 1; j < Coluna - 1; j++){
            if(terreno[i - 1][j] == 7 && terreno[i + 1][j] == 7 && terreno[i][j + 1] == 7 && terreno[i][j - 1] == 7 &&
               terreno[i - 1][j - 1] == 7 && terreno[i - 1][j + 1] == 7 && terreno[i + 1][j - 1] == 7 &&
               terreno[i + 1][j + 1] == 7 && terreno[i][j] == 42){
                RLinha = i + 1;
                RColuna = j + 1;
            }
        }
    }
    
    cout << RLinha << " " << RColuna << endl;
    
    return 0;
}
