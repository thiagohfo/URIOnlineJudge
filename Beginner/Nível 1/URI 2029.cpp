//
//  URI 2029.cpp
//  Pratica
//
//  Created by Thiago Henrique on 29/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double pi = 3.14, altura, area, raio, volume;
    
    cin >> fixed;
    cin.precision(2);
    cout << fixed;
    cout.precision(2);
    
    while(cin >> volume >> raio){
        raio = raio / 2;
        area = pi * (raio * raio);
        altura = volume / area;
        
        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }
    
    return 0;
}
