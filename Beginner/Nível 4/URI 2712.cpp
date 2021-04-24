//
//  URI 2712.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 06/01/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <regex>
#include <iostream>

using namespace std;

int main () {
    regex r("^[A-Z]{3}(-){1}[0-9]{4}$");
    string placa;
    int casos;
    
    cin >> casos;
    
    for (int i = 0; i < casos; i++) {
        cin >> placa;
        
        char digito;
        
        if (placa.length() > 1) {
            digito = placa[placa.length() - 1];
        } else {
            digito = placa[0];
        }
        
        if (regex_match(placa, r)) {
            switch (digito) {
                case '1':
                case '2':
                    cout << "MONDAY" << endl;
                    break;
                case '3':
                case '4':
                    cout << "TUESDAY" << endl;
                    break;
                case '5':
                case '6':
                    cout << "WEDNESDAY" << endl;
                    break;
                case '7':
                case '8':
                    cout << "THURSDAY" << endl;
                    break;
                case '9':
                case '0':
                    cout << "FRIDAY" << endl;
                    break;
            }
        } else {
            cout << "FAILURE" << endl;
        }
    }
    
    return 0;
}
