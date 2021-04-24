//
//  URI 1963.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double valor1, valor2, aumento;

    cout << fixed;
    cout.precision(2);
    cin >> fixed;
    cin.precision(2);
    cin >> valor1 >> valor2;
    
    aumento = ((valor2 / valor1) - 1) * 100;
    
    cout << aumento << "%" << endl;
    
    return 0;
}
