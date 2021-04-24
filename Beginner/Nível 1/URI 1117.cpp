//
//  URI 1117.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    float notas[2], temp, media;
    int cont = 0;
    
    while(cont < 2){
        cin >> temp;
        
        if(temp >= 0.0 && temp <= 10.0){
            notas[cont] = temp;
            cont++;
        }
        else{
            cout << "nota invalida" << endl;
        }
    }
    
    media = (notas[0] + notas[1]) / 2;
    
    cout << fixed;
    cout.precision(2);
    cout << "media = " << media << endl;
    
    return 0;
}
