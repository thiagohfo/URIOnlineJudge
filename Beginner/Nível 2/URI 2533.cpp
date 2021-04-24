//
//  URI 2533.cpp
//  Pratica
//
//  Created by Thiago Henrique on 28/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int M;
    
    while(cin >> M){
        int nota[M], carga[M], numerador = 0, denominador = 0;
        double resultado = 0;
        
        for(int i = 0; i < M; i++){
            cin >> nota[i] >> carga[i];
            
            numerador += nota[i] * carga[i];
            denominador += carga[i];
        }
        
        denominador *= 100;
        
        resultado = double(numerador) / double(denominador);
        
        cout << fixed;
        cout.precision(4);
        cout << resultado << endl;
        
        numerador = 0;
        denominador = 0;
        resultado = 0;
        
    }
    
    return 0;
}
