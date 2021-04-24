//
//  URI 1174.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    float vetor[100];
    
    cout << fixed;
    cout.precision(1);
    
    for (int i = 0; i < 100; i++) {
        cin >> vetor[i];
        
        if(vetor[i] <= 10){
            cout << "A[" << i << "] = " << vetor[i] << endl;
        }
    }
    
    return 0;
}
