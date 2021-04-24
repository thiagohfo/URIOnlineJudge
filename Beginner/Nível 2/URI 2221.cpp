//
//  URI 2221.cpp
//  Pratica
//
//  Created by Thiago Henrique on 18/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int T, B, ataque, defesa, lvl_treinador;
    double atacante, defensor;
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> B;
        cin >> ataque >> defesa >> lvl_treinador;
        
        atacante = (double(ataque) + double(defesa)) / 2;
        
        if(lvl_treinador % 2 == 0){
            atacante += B;
        }
        
        cin >> ataque >> defesa >> lvl_treinador;
        
        defensor = (double(ataque) + double(defesa)) / 2;
        
        if(lvl_treinador % 2 == 0){
            defensor += B;
        }
        
        if(defensor > atacante){
            cout << "Guarte" << endl;
        }
        else if(atacante > defensor){
            cout << "Dabriel" << endl;
        }
        else{
            cout << "Empate" << endl;
        }
        
    }
    
    return 0;
}
