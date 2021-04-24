//
//  URI 2540.cpp
//  Pratica
//
//  Created by Thiago Henrique on 30/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int num_votos, cont_votos_favor = 0, cont_votos_contra = 0, voto = 0;
    
    while(cin >> num_votos){
        for(int i = 0; i < num_votos; i++){
            cin >> voto;
            
            if(voto == 1){
                cont_votos_favor++;
            } else{
                cont_votos_contra++;
            }
        }
        
        if(cont_votos_favor >= cont_votos_contra * 2){
            cout << "impeachment" << endl;
        } else{
            cout << "acusacao arquivada" << endl;
        }
        
        num_votos = 0;
        cont_votos_favor = 0;
        cont_votos_contra = 0;
        voto = 0;
    }
    
    return 0;
}
