//
//  URI 2162.cpp
//  Pratica
//
//  Created by Thiago Henrique on 13/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, resultado = 1;
    
    cin >> N;
    
    int numeros[N];
    
    for(int i = 0; i < N; i++){
        cin >> numeros[i];
    }
    
    if(N == 2){
        if((numeros[0] > numeros[1]) || (numeros[0] < numeros[1])){
            resultado = 1;
        }
        else{
            resultado = 0;
        }
    }
    else{
        for(int i = 1; i < N - 1; i++){
            if(numeros[i] > numeros[i - 1] && numeros[i] > numeros[i + 1]){
                resultado = 1;
            }
            else if(numeros[i] < numeros[i - 1] && numeros[i] < numeros[i + 1]){
                resultado = 1;
            }
            else{
                resultado = 0;
            }
        }
    }
    
    cout << resultado << endl;
    
    return 0;
}
