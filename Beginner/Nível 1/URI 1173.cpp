//
//  URI 1173.cpp
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
    
    cin >> vetor[0];
    cout << "N[" << 0 << "] = " << vetor[0] << endl;
    
    for (int i = 1; i < 10; i++) {
        vetor[i] = vetor[i - 1] * 2;
        
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
    
    return 0;
}
