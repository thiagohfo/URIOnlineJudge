//
//  URI 1828.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    string escolhas[2], opcoes[5][3];
    int N;
    
    opcoes[0][0] = "pedra";
    opcoes[0][1] = "lagarto";
    opcoes[0][2] = "tesoura";
    opcoes[1][0] = "lagarto";
    opcoes[1][1] = "Spock";
    opcoes[1][2] = "papel";
    opcoes[2][0] = "papel";
    opcoes[2][1] = "pedra";
    opcoes[2][2] = "Spock";
    opcoes[3][0] = "Spock";
    opcoes[3][1] = "tesoura";
    opcoes[3][2] = "pedra";
    opcoes[4][0] = "tesoura";
    opcoes[4][1] = "papel";
    opcoes[4][2] = "lagarto";
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> escolhas[0] >> escolhas[1];
        
        for(int j = 0; j < 5; j++){
            if(escolhas[0] == opcoes[j][0]){
                if(escolhas[1] == opcoes[j][1] || escolhas[1] == opcoes[j][2]){
                    cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
                }
                else if(escolhas[0] == escolhas[1]){
                    cout << "Caso #" << i + 1 << ": De novo!" << endl;
                }
                else{
                    cout << "Caso #" << i + 1 << ": Raj trapaceou!" << endl;
                }
            }
        }
    }
    
    return 0;
}
