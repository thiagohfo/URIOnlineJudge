//
//  URI 1867.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 27/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main () {
    bool continua = true, soma1 = true, soma2 = true;
    string numero1, numero2;
    int soma_n1 = 0, soma_n2 = 0;
    
    while (continua) {
        cin >> numero1 >> numero2;
        
        while (soma1) {
            for (int i = 0; i < numero1.length(); i++) {
                soma_n1 += (int)numero1[i] - 48;
            }
            
            if (soma_n1 > 9) {
                numero1 = to_string(soma_n1);
                soma_n1 = 0;
            } else {
                soma1 = false;
            }
        }
        
        while (soma2) {
            for (int i = 0; i < numero2.length(); i++) {
                soma_n2 += (int)numero2[i] - 48;
            }
            
            if (soma_n2 > 9) {
                numero2 = to_string(soma_n2);
                soma_n2 = 0;
            } else {
                soma2 = false;
            }
        }
        
        soma1 = true;
        soma2 = true;
        
        if (soma_n1 > soma_n2) {
            cout << "1" << endl;
        } else if (soma_n2 > soma_n1) {
            cout << "2" << endl;
        } else if (soma_n1 == soma_n2 && soma_n1 != 0) {
            cout << "0" << endl;
        } else if (soma_n1 == 0 && soma_n2 == 0) {
            continua = false;
        }
        
        soma_n1 = 0;
        soma_n2 = 0;
    }
    
    return 0;
}
