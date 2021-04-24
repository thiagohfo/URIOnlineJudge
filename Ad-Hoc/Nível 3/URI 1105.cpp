//
//  URI 1105.cpp
//  Pratica
//
//  Created by Thiago Henrique on 21/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    struct banco{
        int saldo = 0;
        int dividas = 0;
    };
    
    int A, B, C, cont = 0, qtd_bancos, debentures;
    
    while(cin >> qtd_bancos >> debentures){
        if(qtd_bancos == 0 && debentures == 0){
            return 0;
        }
        
        banco bancos[qtd_bancos + 1];
        
        for(int i = 1; i <= qtd_bancos; i++){
            cin >> bancos[i].saldo;
        }
        
        for(int i = 1; i <= debentures; i++){
            cin >> A >> B >> C;
            
            if(A != B){
                bancos[A].dividas += C;
                bancos[B].saldo += C;
            }
            else{
                while(A == B){
                    cin >> A >> B >> C;
                }
                
                bancos[A].dividas += C;
                bancos[B].saldo += C;
            }
        }
        
        for(int i = 1; i <= qtd_bancos; i++){
            if(bancos[i].saldo < bancos[i].dividas){
                cont++;
            }
        }
        
        if(cont > 0){
            cout << "N" << endl;
        }
        else{
            cout << "S" << endl;
        }
        
        cont = 0;
    }
    
    return 0;
}
