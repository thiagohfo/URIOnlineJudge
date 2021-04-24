//
//  URI 2808.cpp
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
    string posI, posF;
    char letraI, letraF;
    int numI = 0, numF = 0;
    
    cin >> posI >> posF;
    
    letraI = posI[0];
    letraF = posF[0];
    numI = posI[1];
    numF = posF[1];
    
    if (abs((int)letraI - (int)letraF) == 2 && abs(numI - numF) == 1) {
        cout << "VALIDO" << endl;
    } else if (abs((int)letraI - (int)letraF) == 1 && abs(numI - numF) == 2) {
        cout << "VALIDO" << endl;
    } else {
        cout << "INVALIDO" << endl;
    }
    
    return 0;
}
