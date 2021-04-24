//
//  URI 1190.cpp
//  Pratica
//
//  Created by Thiago Henrique on 19/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    float M[12][12], operacao = 0, media;
    int cont = 0, limite = 6;
    char T;
    
    cin >> T;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }
    
    for(int i = 0; i < 12; i++){
        for(int j = 11; j > ((i <= 5) ? (11 - i) : limite); j--){
            operacao += M[i][j];
            cont++;
        }
        
        if(i > 5){
            limite++;
        }
    }
    
    cout << fixed;
    cout.precision(1);
    
    if(T == 'S'){
        cout << operacao << endl;
    }
    else if(T == 'M'){
        media = float(operacao) / float(cont);
        
        cout << media << endl;
    }
    
    return 0;
}
