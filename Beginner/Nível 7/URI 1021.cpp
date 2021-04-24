//
//  URI 1021.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char* argv[]) {
    double N = 0.0, temp = 0.0;
    int notas[6] = {0, 0, 0, 0, 0, 0};
    int moedas[6] = {0, 0, 0, 0, 0, 0};
    int valoresNotas[6] = {100, 50, 20, 10, 5, 2};
    int valoresMoedas[6] = {100, 50, 25, 10, 5, 1};
    
    cin >> N;
    
    temp = N;
    
    for (int i = 0; i < 6; i++) {
        if (temp >= valoresNotas[i]) {
            notas[i] = temp / valoresNotas[i];
            temp = temp - double(notas[i] * double(valoresNotas[i]));
        }
    }
    
    temp = temp * 100;
    
    for (int i = 0; i < 6; i++) {
        if (temp >= valoresMoedas[i]) {
            moedas[i] = temp / valoresMoedas[i];
            temp = temp - double(moedas[i] * double(valoresMoedas[i]));
        }
    }
    
    cout << "NOTAS:" << endl;
    
    for (int i = 0; i < 6; i++) {
        cout << notas[i] << " nota(s) de R$ " << fixed << setprecision(2) << double(valoresNotas[i]) << endl;
    }
    
    cout << "MOEDAS:" << endl;
    
    for (int i = 0; i < 6; i++) {
        cout << moedas[i] << " moeda(s) de R$ " << fixed << setprecision(2) << double(valoresMoedas[i] * 0.01) << endl;
    }
    
    return 0;
}
