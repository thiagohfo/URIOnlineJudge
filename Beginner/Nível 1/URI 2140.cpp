//
//  URI 2140.cpp
//  Pratica
//
//  Created by Thiago Henrique on 10/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int compra, valor_pago, cedulas[6] = {2, 5, 10, 20, 50, 100}, troco, notas = 0;
    
    while(cin >> compra >> valor_pago){
        if(compra == 0 && valor_pago == 0){
            break;
        }
        
        troco = valor_pago - compra;
        
        for(int i = 5; i >= 0; i--){
            if(troco == 0){
                break;
            }
            else if(troco >= cedulas[i]){
                troco -= cedulas[i];
                notas++;
            }
        }
        
        if(notas == 2 && troco == 0){
            cout << "possible" << endl;
            
            notas = 0;
        }
        else{
            cout << "impossible" << endl;
            
            notas = 0;
        }
    }
    
    return 0;
}
