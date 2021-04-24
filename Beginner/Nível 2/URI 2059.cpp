//
//  URI 2059.cpp
//  Pratica
//
//  Created by Thiago Henrique on 07/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int numero_j1, numero_j2, roubo_j1, roubo_j2, impar_par, resultado;
    
    cin >> impar_par >> numero_j1 >> numero_j2 >> roubo_j1 >> roubo_j2;
    
    resultado = numero_j1 + numero_j2;
    
    if(roubo_j1 == 0 && roubo_j2 == 0){
        if((resultado % 2 == 0 && impar_par == 1) || (resultado % 2 == 1 && impar_par == 0)){
            cout << "Jogador 1 ganha!" << endl;
        }
        else{
            cout << "Jogador 2 ganha!" << endl;
        }
    }
    else if(roubo_j1 == 1 && roubo_j2 == 1){
        cout << "Jogador 2 ganha!" << endl;
    }
    else if((roubo_j1 == 0 && roubo_j2 == 1) || (roubo_j1 == 1 && roubo_j2 == 0)){
        cout << "Jogador 1 ganha!" << endl;
    }
    
    return 0;
}
