//
//  URI 1914.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, N1, N2, resultado_tmp;
    string jogador1, jogador2, opcao1, opcao2;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> jogador1 >> opcao1 >> jogador2 >> opcao2;
        cin >> N1 >> N2;
        
        resultado_tmp = N1 + N2;
        
        if(resultado_tmp % 2 == 0){
            if(opcao1 == "PAR"){
                cout << jogador1 << endl;
            }
            else{
                cout << jogador2 << endl;
            }
        }
        else{
            if(opcao1 == "IMPAR"){
                cout << jogador1 << endl;
            }
            else{
                cout << jogador2 << endl;
            }
        }
    }
    
    return 0;
}
