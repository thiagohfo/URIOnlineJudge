//
//  URI 2686.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 19/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

string calcularHora (int t_segundos) {
    string hora, minutos, segundos;
    int horaInicial = 6;
    
    if (((t_segundos / 60) / 60) > 17) {
        hora = "0" + to_string(((t_segundos / 60) / 60) - 18);
        
    } else {
        if (((t_segundos / 60) / 60) > 3) {
            hora = to_string(horaInicial + ((t_segundos / 60) / 60));
        } else {
            hora = "0" + to_string(horaInicial + ((t_segundos / 60) / 60));
        }
        
    }
    
    if (((t_segundos / 60) % 60) > 9) {
        minutos = to_string((t_segundos / 60) % 60);
    } else {
        minutos = "0" + to_string((t_segundos / 60) % 60);
    }
    
    if ((t_segundos % 60) > 9) {
        segundos = to_string(t_segundos % 60);
    } else {
        segundos = "0" + to_string(t_segundos % 60);
    }
    
    return hora + ":" + minutos + ":" + segundos;
    
}

int main (int argc, char* argv[]) {
    float M = 0.0;
    int minutos = 0;
    
    while (cin >> M) {
        minutos = 240 * M;
        
        if (M >= 270 && M < 360) {
            cout << "De Madrugada!!" << endl;
        } else if (M >= 180 && M < 270) {
            cout << "Boa Noite!!" << endl;
        } else if (M >= 90 && M < 180) {
            cout << "Boa Tarde!!" << endl;
        } else {
            cout << "Bom Dia!!" << endl;
        }
        
        cout << calcularHora(minutos) << endl;
    }
    
    return 0;
}
