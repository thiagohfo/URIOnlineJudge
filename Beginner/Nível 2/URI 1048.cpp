//
//  URI 1048.cpp
//  Pratica
//
//  Created by Thiago Henrique on 13/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

float calcular_aumento(float percentual, float salario){
    return salario * percentual;
}

int main(){
    float salario, aumento;
    float percentuais[5] = {0.15, 0.12, 0.10, 0.07, 0.04};
    int percentual;
    
    cin >> salario;
    
    if(salario <= 400.00){
        aumento = calcular_aumento(percentuais[0], salario);
        percentual = 15;
    }
    else if(salario <= 800.00){
        aumento = calcular_aumento(percentuais[1], salario);
        percentual = 12;
    }
    else if(salario <= 1200.00){
        aumento = calcular_aumento(percentuais[2], salario);
        percentual = 10;
    }
    else if(salario <= 2000.00){
        aumento = calcular_aumento(percentuais[3], salario);
        percentual = 7;
    }
    else{
        aumento = calcular_aumento(percentuais[4], salario);
        percentual = 4;
    }
    
    cout << fixed;
    cout.precision(2);
    cout << "Novo salario: " << salario + aumento << endl;
    cout << "Reajuste ganho: " << aumento << endl;
    cout << "Em percentual: " << percentual << " %" <<endl;
    
    return 0;
}
