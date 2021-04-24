//
//  URI 1154.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int idade = 0, cont = 0, total_idade = 0;
    float media;
    
    do{
        cin >> idade;
        
        if(idade >= 0){
            total_idade += idade;
            cont++;
        }
        
    }while(idade >= 0);
    
    media = float(total_idade) / float(cont);
    
    cout << fixed;
    cout.precision(2);
    cout << media << endl;
    
    return 0;
}
