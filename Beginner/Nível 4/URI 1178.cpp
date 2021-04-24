//
//  URI 1178.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double vetor[100], X;
    
    cin >> X;
    
    vetor[0] = X;
    
    cout << fixed;
    cout.precision(4);
    cout << "N[" << 0 << "] = " << vetor[0] << endl;
    
    for(int i = 1; i < 100; i++) {
        vetor[i] = vetor[i - 1] / 2;
        
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
    
    return 0;
}
