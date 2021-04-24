//
//  URI 1165.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, numero, cont = 0;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> numero;
        
        for (int j = 1; j <= numero; j++) {
            if(numero % j == 0){
                cont++;
            }
        }
        
        if(cont == 2){
            cout << numero << " eh primo" << endl;
        }
        else{
            cout << numero << " nao eh primo" << endl;
        }
        
        cont = 0;
    }
    
    return 0;
}
