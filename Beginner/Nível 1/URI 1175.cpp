//
//  URI 1175.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int vetor[20], temp;
    
    for(int i = 0; i < 20; i++){
        cin >> vetor[i];
    }
    
    for(int i = 0, j = 19; i < 10; i++, j--) {
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
    
    for(int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
    
    return 0;
}
