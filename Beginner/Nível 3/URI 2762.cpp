//
//  URI 2762.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 10/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    
    double entrada;
    bool parteInteira = true, pegarZeroDec = false;
    string numero, saida, inteiro, decimal;
    
    cin >> numero;

    for (int i = 0; i < int(numero.size()); i++) {
        if (numero[i] == '.') {
            parteInteira = false;
        } else if (parteInteira == true) {
            inteiro += numero[i];
        } else if (parteInteira == false) {
            decimal += numero[i];
        }
    }
    
    numero.clear();
    entrada = stod(decimal);
    
    if (entrada == 0) {
        decimal.clear();
        decimal += '0';
    } else {
        for (int i = 0; i < decimal.size(); i++) {
            if (decimal[i] == '0' && pegarZeroDec == false) {
                continue;
            } else {
                numero += decimal[i];
                pegarZeroDec = true;
            }
        }
    
        decimal = numero;
    }
    
    numero.clear();
    entrada = stod(inteiro);
    
    if (entrada == 0) {
        inteiro.clear();
        inteiro += '0';
    }
    
    saida += decimal;
    saida += '.';
    saida += inteiro;
    
    cout << saida << endl;
    
    return 0;
}
