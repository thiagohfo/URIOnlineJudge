//
//  URI 2139.cpp
//  Pratica
//
//  Created by Thiago Henrique on 09/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int mes, dia, total_dias = 0, faltam = 0;
    
    while(cin >> mes >> dia){
        for(int i = 0; i < mes - 1; i++){
            if(i < 6 && i % 2 == 0){
                total_dias += 31;
            }
            else if(i == 1){
                total_dias += 29;
            }
            else if((i > 6 && i % 2 == 1) || i == 6){
                total_dias += 31;
            }
            else{
                total_dias += 30;
            }
        }
        
        total_dias += dia;
        faltam = 360 - total_dias;
        
        if(faltam < 0){
            cout << "Ja passou!" << endl;
        }
        else if(faltam == 0){
            cout << "E natal!" << endl;
        }
        else if(faltam == 1){
            cout << "E vespera de natal!" << endl;
        }
        else{
            cout << "Faltam " << faltam << " dias para o natal!" << endl;
        }
        
        faltam = 0;
        total_dias = 0;
    }
    
    return 0;
}
