//
//  URI 1051.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
    float salario = 0;
    float imposto = 0;
    
    cout << fixed;
    cout.precision(2);
    
    cin >> salario;
    
    if(salario > 2000.00 && salario <= 3000.00) {
        imposto = (salario - 2000.00) * 0.08;
        
        cout << "R$ " << imposto << endl;
    } else if(salario > 3000.00 && salario <= 4500.00) {
        imposto = (salario - 3000.00) * 0.18;
        imposto = imposto + (1000.00 * 0.08);
        
        cout << "R$ " << imposto << endl;
    } else if(salario > 4500.00) {
        imposto = (salario - 4500.00) * 0.28;
        imposto = imposto + (1500.00 * 0.18);
        imposto = imposto + (1000.00 * 0.08);
        
        cout << "R$ " << imposto << endl;
    } else {
        cout << "Isento" << endl;
    }
    
    return 0;
}
