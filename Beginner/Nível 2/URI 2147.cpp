//
//  URI 2147.cpp
//  Pratica
//
//  Created by Thiago Henrique on 11/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int C;
    double resultado;
    string palavra;
    
    cin >> C;
    cout << fixed;
    cout.precision(2);
    
    for(int i = 0; i < C; i++) {
        cin >> palavra;
        
        resultado = palavra.size() * pow(double(10), -2);
        
        cout << resultado << endl;
    }
    
    return 0;
}
