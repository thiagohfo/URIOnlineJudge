//
//  URI 1089.cpp
//  Pratica
//
//  Created by Thiago Henrique on 18/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, picos = 0;
    
    cin >> N;
    
    while(N != 0){
        int amostras[N];
        picos = 0;
        
        for(int i = 0; i < N; i++){
            cin >> amostras[i];
        }
        
        for(int i = 0; i < N; i++){
            if(amostras[i] < amostras[(i + 1) %N] && amostras[(i + 1) %N] > amostras[(i + 2) %N]){
                picos++;
            }
            if(amostras[i] > amostras[(i + 1) %N] && amostras[(i + 1) %N] < amostras[(i + 2) %N]){
                picos++;
            }
        }
        
        cout << picos << endl;
        cin >> N;
        
    }
    
    return 0;
}
