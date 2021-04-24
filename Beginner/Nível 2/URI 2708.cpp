//
//  URI 2708.cpp
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
    int total = 0, passageiros = 0, jipes = 0;
    string movimento;
    bool fica = true;
    
    while (fica) {
        cin >> movimento;
        
        if (movimento == "ABEND") {
            fica = false;
            continue;
        } else {
            cin >> passageiros;
        }
        
        if (movimento == "SALIDA") {
            total += passageiros;
            jipes++;
        } else if (movimento == "VUELTA") {
            total -= passageiros;
            jipes--;
        }
    }
    
    cout << total << endl;
    cout << jipes << endl;
    
    return 0;
}
