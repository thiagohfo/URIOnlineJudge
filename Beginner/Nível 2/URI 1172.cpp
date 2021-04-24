//
//  URI 1172.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int vetor[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
        
        if(vetor[i] < 1){
            vetor[i] = 1;
        }
        
        cout << "X[" << i << "] = " << vetor[i] << endl;
    }
    
    return 0;
}
