//
//  URI 2486.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string alimentos[7] = {"suco de laranja", "morango fresco", "mamao", "goiaba vermelha", "manga", "laranja", "brocolis"}, fruta;
    int qtd_vitaminas[7] = {120, 85, 85, 70, 56, 50, 34}, T, total_vitamina = 0, qtd, pos_fruta;
    
    cin >> T;
    
    while(T != 0){
        for(int i = 0; i < T; i++){
            cin >> qtd;
            cin.ignore();
            getline(cin, fruta);
            
            for(int j = 0; j < 7; j++){
                if(fruta == alimentos[j]){
                    pos_fruta = j;
                    
                    break;
                }
            }
            
            total_vitamina += qtd * qtd_vitaminas[pos_fruta];
        }
        
        if(total_vitamina > 130){
            total_vitamina -= 130;
            
            cout << "Menos " << total_vitamina << " mg" << endl;
        } else if(total_vitamina < 110){
            total_vitamina = 110 - total_vitamina;
            
            cout << "Mais " << total_vitamina << " mg" << endl;
        } else{
            cout << total_vitamina << " mg" << endl;
        }
        
        total_vitamina = 0;
        
        cin >> T;
    }
    
    return 0;
}
