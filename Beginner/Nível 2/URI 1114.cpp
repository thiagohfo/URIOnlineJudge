//
//  URI 1114.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int senha = 0;
    
    while(senha != 2002){
        cin >> senha;
        
        if(senha != 2002){
            cout << "Senha Invalida" << endl;
        }
        else{
            cout << "Acesso Permitido" << endl;
        }
    }
    
    return 0;
}
