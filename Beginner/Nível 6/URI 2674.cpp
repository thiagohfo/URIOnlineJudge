//
//  URI 2674.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 16/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main () {
    string numero;
    
    //cin.clear();
    while (getline(cin, numero)) {
        long int numero_int = stol(numero);
        bool aux = true;
        bool super = true;
        
        if (numero_int == 1) {
            aux = false;
            
            cout << "Nada" << endl;
        } else if (numero_int == 2) {
            aux = false;
            
            cout << "Super" << endl;
        } else if (numero_int > 2) {
            for (int i = 2; i < numero_int; i++) {
                if (numero_int % i == 0) {
                    cout << "Nada" << endl;
                    
                    aux = false;
                    
                    break;
                }
            }
        }
        
        if (aux == true) {
            for (int i = 0; i < numero.length(); i++) {
                int temp = (int)numero[i] - 48;
                
                if (temp == 2 || temp == 3 || temp == 5 || temp == 7) {
                    continue;
                } else {
                    super = false;
                    
                    cout << "Primo" << endl;
                    
                    break;
                }
            }
            
            if (super == true) {
                cout << "Super" << endl;
                
                super = true;
            }
        }
        
        aux = true;
        //cin.clear();
    }
    
    return 0;
}
