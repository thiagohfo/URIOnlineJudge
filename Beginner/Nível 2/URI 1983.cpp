//
//  URI 1983.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N;
    long long int matricula, matricula_maior_nota = 0;
    float nota, maior_nota = 0;
    
    cin >> fixed;
    cin.precision(1);
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> matricula >> nota;
        
        if(nota > maior_nota){
            maior_nota = nota;
            matricula_maior_nota = matricula;
        }
    }
    
    if(maior_nota >= 8.0){
        cout << matricula_maior_nota << endl;
    }
    else{
        cout << "Minimum note not reached" << endl;
    }
    
    return 0;
}
