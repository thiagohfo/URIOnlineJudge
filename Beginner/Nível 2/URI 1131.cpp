//
//  URI 1131.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int golsI = 0, golsG = 0, grenais = 0;
    int empates = 0, vitI = 0, vitG = 0, opcao = 0;
    bool acabou = false;
    
    while(acabou != true){
        cin >> golsI >> golsG;
        
        if(golsI > golsG){
            vitI++;
        }
        else if(golsG > golsI){
            vitG++;
        }
        else if(golsI == golsG){
            empates++;
        }
        
        grenais++;
        
        while(opcao < 1 || opcao > 2){
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> opcao;
            
            if(opcao == 2){
                acabou = true;
            }
        }
        
        opcao = 0;
    }
    
    cout << grenais << " grenais\n"
        << "Inter:" << vitI << "\n"
        << "Gremio:" << vitG << "\n"
        << "Empates:" << empates << "\n";
    
    if(vitI > vitG){
        cout << "Inter venceu mais" << endl;
    }
    else if(vitG > vitI){
        cout << "Gremio venceu mais" << endl;
    }
    else if(vitG == vitI){
        cout << "Nao houve vencedor" << endl;
    }
    
    return 0;
}
