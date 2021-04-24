//
//  URI 2684.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 17/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main () {
    int casos = 0, tipo_tag = 0, cont = 0;
    string linha;
    bool aux = true, aberto = false;
    
    cin >> casos;
    cin.ignore(INT_MAX, '\n');
    
    for (int i = 0; i < casos; i++) {
        getline(cin, linha);
        
        tipo_tag = ((int)linha[0] - 48);
        
        if (tipo_tag == 0) {
            for (int j = 1; j < linha.length(); j++) {
                if (linha[j] == '>' && aberto == false) {
                    aux = false;
                    break;
                } else if (linha[j] == '<') {
                    aberto = true;
                } else if (linha[j] == '>' && aberto == true) {
                    aberto = false;
                }
            }
        } else if (tipo_tag == 1) {
            for (int j = 1; j < linha.length(); j++) {
                if (linha[j] == '>' && aberto == false) {
                    aux = false;
                    break;
                } else if (linha[j] == '<') {
                    aberto = true;
                } else if (linha[j] == '>' && aberto == true) {
                    aberto = false;
                    cont++;
                }
            }
            
            if (cont > 1) {
                aux = false;
            }
        }
        
        if (aux == false) {
            cout << "error" << endl;
        } else {
            cout << "Successful!!" << endl;
        }
        
        cont = 0;
        aux = true;
        aberto = false;
    }
    
    return 0;
}
