//
//  URI 1973.cpp
//  Pratica
//
//  Created by Thiago Henrique on 06/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long long int N, total_ovelhas = 0, qtd_sitios_roubados = 0;
    bool par = false;
    
    cin >> N;
    
    long long int numeros[N], sitios_roubados[N];
    
    for(int i = 0; i < N; i++){
        sitios_roubados[i] = -99;
    }
    
    for(int i = 0; i < N; i++){
        cin >> numeros[i];
        
        total_ovelhas += numeros[i];
    }
    
    for(int i = 0; i < N; i++){
        if(i < 0){
            break;
        }
        
        if(numeros[i] % 2 == 0){
            par = true;
        }
        
        if(numeros[i] > 0){
            numeros[i]--;
            sitios_roubados[i] = 1;
            total_ovelhas--;
            
            if(par){
                i -= 2;
            }
        }
        else{
            break;
        }
    }
    
    for(int i = 0; i < N; i++){
        if(sitios_roubados[i] != -99){
            qtd_sitios_roubados++;
        }
    }
    
    cout << qtd_sitios_roubados << " " << total_ovelhas << endl;
    
    return 0;
}
