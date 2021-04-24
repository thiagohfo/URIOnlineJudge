//
//  URI 1187.cpp
//  Pratica
//
//  Created by Thiago Henrique on 19/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double M[12][12], operacao = 0, media;
    int cont = 0;
    char T;
    
    cin >> T;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = (i + 1); j < (11 - i); j++){
            operacao += M[i][j];
            cont++;
        }
    }
    
    cout << fixed;
    cout.precision(1);
    
    if(T == 'S'){
        cout << operacao << endl;
    }
    else if(T == 'M'){
        media = double(operacao) / double(cont);
        
        cout << media << endl;
    }
    
    return 0;
}
