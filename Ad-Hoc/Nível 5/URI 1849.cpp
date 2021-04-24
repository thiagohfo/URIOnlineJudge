//
//  URI 1849.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 28/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    std::ios::sync_with_stdio(false);
    
    long long int temp_max1 = 0, temp_max2 = 0, temp_menor1 = 10000, temp_menor2 = 10000, lado1 = 0, lado2 = 0, area = 0, quadrado1 = 0, quadrado2 = 0;
    unsigned int valores[4];
    
    cin >> valores[0] >> valores[1] >> valores[2] >> valores[3];
    
    for (int i = 0; i < 2; i++) {
        if (valores[i] > temp_max1) {
            temp_max1 = valores[i];
        }
        
        if (valores[i] < temp_menor1) {
            temp_menor1 = valores[i];
        }
    }
    
    for (int i = 2; i < 4; i++) {
        if (valores[i] > temp_max2) {
            temp_max2 = valores[i];
        }
        
        if (valores[i] < temp_menor2) {
            temp_menor2 = valores[i];
        }
    }
    
    if (temp_max1 > temp_max2) {
        lado1 = temp_max2;
    } else if (temp_max2 > temp_max1) {
        lado1 = temp_max1;
    } else {
        lado1 = temp_max1;
    }
    
    lado2 = temp_menor1 + temp_menor2;
    
    if (lado1 > lado2) {
        area = lado2 * lado2;
    } else if (lado2 > lado1) {
        area = lado1 * lado1;
    } else {
        area = lado1 * lado1;
    }
    
    quadrado1 = temp_menor1 * temp_menor1;
    quadrado2 = temp_menor2 * temp_menor2;
    
    if (quadrado1 > area) {
        area = quadrado1;
    }
    
    if (quadrado2 > area) {
        area = quadrado2;
    }
    
    cout << area << endl;
    
    return 0;
}
