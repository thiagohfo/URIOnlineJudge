//
//  URI 1960.cpp
//  Pratica
//
//  Created by Thiago Henrique on 31/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, numeros[7] = {1000, 500, 100, 50, 10, 5, 1}, qtd_letras;
    char romanos[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
    double temp;
    string N_string;
    
    cin.precision(1);
    cout.precision(1);
    cin >> N;

    for(int i = 0; i < 7; i++){
        temp = double(N) / double(numeros[i]);
        N_string = to_string(N);
        
        if(N_string[0] == '4' && temp >= 0.8){
            cout << romanos[i + 1] << romanos[i];
            
            N = N - (numeros[i] - numeros[i + 1]);
        }
        else if(temp >= 0.9 && temp < 1){
            cout << romanos[i + 2] << romanos[i];
            
            N = N - (numeros[i] - numeros[i + 2]);
            
            i--;
        }
        else if(temp >= 1){
            qtd_letras = N / numeros[i];
            
            for(int j = 0; j < qtd_letras; j++){
                cout << romanos[i];
            }
            
            N = N % numeros[i];
        }
    }
    
    cout << endl;
    
    return 0;
}
