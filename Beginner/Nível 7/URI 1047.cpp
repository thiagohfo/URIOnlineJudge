//
//  URI 1047.cpp
//  Pratica
//
//  Created by Thiago Henrique on 13/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int hora_i, minuto_i, hora_f, minuto_f, horas_jogo, minutos_jogo;
    
    cin >> hora_i >> minuto_i >> hora_f >> minuto_f;
    
    if(hora_i >= hora_f){
        horas_jogo = 24 - hora_i;
        horas_jogo += hora_f;
    }
    else{
        horas_jogo = hora_f - hora_i;
    }
    
    if(minuto_i >= minuto_f){
        minutos_jogo = 60 - minuto_i;
        minutos_jogo += minuto_f;
        
        if(minutos_jogo == 60){
            minutos_jogo = 0;
        }
        else{
            horas_jogo--;
        }
    }
    else{
        minutos_jogo = minuto_f - minuto_i;
    }
    
    cout << "O JOGO DUROU " << horas_jogo << " HORA(S) E " << minutos_jogo << " MINUTO(S)" << endl;
    
    return 0;
}
