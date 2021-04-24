//
//  URI 2028.cpp
//  Pratica
//
//  Created by Thiago Henrique on 27/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int somaNumeros(int numero){
    if(numero == 0){
        return 1;
    }
    
    numero += somaNumeros(numero - 1);
    
    return numero;
}

int main(){
    int N, cont = 1, temp;
    
    while(cin >> N){
        temp = somaNumeros(N);
        
        if(temp == 1){
            cout << "Caso " << cont << ": " << temp << " numero" << endl;
            cout << 0;
        }
        else{
            cout << "Caso " << cont << ": " << temp << " numeros" << endl;
            cout << "0";
            
            for(int i = 0; i < N; i++){
                for(int j = 0; j <= i; j++){
                    cout << " " << i + 1;
                }
            }
        }
        
        cout << endl;
        cout << endl;
        
        cont++;
    }
    
    return 0;
}
