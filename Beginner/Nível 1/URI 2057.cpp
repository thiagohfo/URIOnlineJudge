//
//  URI 2057.cpp
//  Pratica
//
//  Created by Thiago Henrique on 29/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int origem, viagem, destino, horario, temp;
    
    cin >> origem >> viagem >> destino;
    
    temp = viagem + destino;
    
    if(origem + temp > 24){
        horario = (origem + temp) - 24;
    }
    else if(origem + temp < 0){
        horario = 24 + (origem + temp);
    }
    else{
        horario = origem + viagem + destino;
    }
    
    if(horario == 24){
        horario = 0;
    }
    
    cout << horario << endl;
    
    return 0;
}
