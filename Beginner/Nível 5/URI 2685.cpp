//
//  URI 2685.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 17/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    int inclinacao = 0;
    
    while (cin >> inclinacao) {
        if ((0 <= inclinacao && inclinacao < 90) || inclinacao == 360) {
            cout << "Bom Dia!!" << endl;
        } else if (90 <= inclinacao && inclinacao < 180) {
            cout << "Boa Tarde!!" << endl;
        } else if (180 <= inclinacao && inclinacao < 270) {
            cout << "Boa Noite!!" << endl;
        } else if (270 <= inclinacao && inclinacao < 360) {
            cout << "De Madrugada!!" << endl;
        }
    }
    
    return 0;
}
