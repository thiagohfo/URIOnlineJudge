//
//  URI 2168.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int N, quadraL = 0, quadraC = 0, cameras = 0, contador = 0;
    stringstream bairros_seguros;
    string resposta;
    
    cin >> N;
    
    int mapa[N + 1][N + 1];
    
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N; j++){
            cin >> mapa[i][j];
        }
    }
    
    for(int k = 0; k < (N * N); k++){
        for(int i = quadraL; i <= quadraL + 1; i++){
            for(int j = quadraC; j <= quadraC + 1; j++){
                if(mapa[i][j] == 1){
                    cameras++;
                }
            }
        }
        
        contador++;
        quadraC++;
        
        if(cameras >= 2){
            bairros_seguros << 'S';
            cameras = 0;
        }
        else{
            bairros_seguros << 'U';
            cameras = 0;
        }
        
        if(contador == N){
            quadraC = 0;
            quadraL++;
            contador = 0;
            bairros_seguros << '\n';
        }
    }
    
    resposta = bairros_seguros.str();
    resposta.pop_back();
    
    cout << resposta << endl;
    
    return 0;
}
