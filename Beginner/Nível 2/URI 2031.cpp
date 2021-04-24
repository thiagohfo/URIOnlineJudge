//
//  URI 2031.cpp
//  Pratica
//
//  Created by Thiago Henrique on 29/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    string jogador1, jogador2;
    int N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> jogador1;
        cin >> jogador2;
        
        if(jogador1 == "ataque" && jogador2 != "ataque"){
            cout << "Jogador 1 venceu" << endl;
        }
        else if(jogador1 == "ataque" && jogador2 == "ataque"){
            cout << "Aniquilacao mutua" << endl;
        }
        else if(jogador1 != "papel" && jogador2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        }
        else if(jogador1 == "papel" && jogador2 == "papel"){
            cout << "Ambos venceram" << endl;
        }
        else if(jogador1 == "pedra" && jogador2 == "pedra"){
            cout << "Sem ganhador" << endl;
        }
        else if(jogador1 == "pedra" && jogador2 == "papel"){
            cout << "Jogador 1 venceu" << endl;
        }
        else{
            cout << "Jogador 2 venceu" << endl;
        }
    }
    
    return 0;
}
