//
//  URI 2861.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 06/01/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main () {
    string pergunta;
    int qtd_perguntas = 0;
    
    while (cin >> qtd_perguntas) {
        cin.ignore();
        
        for (int i = 0; i < qtd_perguntas; i++) {
            getline(cin, pergunta);
            
            cout << "gzuz" << endl;
        }
    }
    
    return 0;
}
