//
//  URI 1180.cpp
//  Pratica
//
//  Created by Thiago Henrique on 19/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, menor_numero = 9999, posicao;
    
    cin >> N;
    
    int X[N];
    
    for(int i = 0; i < N; i++){
        cin >> X[i];
    }
    
    for(int i = 0; i < N; i++){
        if(X[i] < menor_numero){
            menor_numero = X[i];
            posicao = i;
        }
    }
    
    cout << "Menor valor: " << menor_numero << endl;
    cout << "Posicao: " << posicao << endl;
    
    return 0;
}
