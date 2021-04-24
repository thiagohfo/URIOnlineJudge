//
//  URI 2060.cpp
//  Pratica
//
//  Created by Thiago Henrique on 07/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long int N;
    int multiplos[4] = {2, 3, 4, 5}, qtd_multiplos[4] = {0, 0, 0, 0};
    
    cin >> N;
    
    long int numeros[N];
    
    for(int i = 0; i < N; i++){
        cin >> numeros[i];
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 4; j++){
            if(numeros[i] % multiplos[j] == 0){
                qtd_multiplos[j]++;
            }
        }
    }
    
    for(int i = 0; i < 4; i++){
        cout << qtd_multiplos[i] << " Multiplo(s) de " << multiplos[i] << endl;
    }
    
    return 0;
}
