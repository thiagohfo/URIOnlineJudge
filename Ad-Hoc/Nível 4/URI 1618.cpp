//
//  URI 1618.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 28/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    
    int coordenadas[10], N = 0;
    
    cin >> N;
    
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < 10; i++) {
            cin >> coordenadas[i];
        }
        
        if (coordenadas[8] >= coordenadas[0] && coordenadas[8] <= coordenadas[2] && coordenadas[9] >= coordenadas[1] && coordenadas[9] <= coordenadas[7]) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    
    return 0;
}
