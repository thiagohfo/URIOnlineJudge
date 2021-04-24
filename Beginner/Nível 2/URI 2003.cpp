//
//  URI 2003.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int hora, minutos, atraso;
    string lixo, temp;
    
    while(cin >> lixo){
        temp.push_back(lixo[0]);
        hora = stoi(temp);
        temp.erase();
        temp.push_back(lixo[2]);
        temp.push_back(lixo[3]);
        minutos = stoi(temp);
        temp.erase();
        
        if(hora < 7){
            cout << "Atraso maximo: 0" << endl;
        }
        else{
            atraso = (((hora + 1) * 60) + minutos) - 480;
            
            cout << "Atraso maximo: " << atraso << endl;
        }
        
        atraso = 0;
    }
    
    return 0;
}
