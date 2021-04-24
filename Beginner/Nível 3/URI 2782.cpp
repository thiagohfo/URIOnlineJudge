//
//  URI 2782.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 11/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, diferenca = 0, cont = 0;
    bool primeiraDif = true;
    
    cin >> N;
    
    int numeros[N];
    
    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
    }
    
    if (N == 1) {
        cont++;
    } else {
        if (primeiraDif == true) {
            diferenca = numeros[1] - numeros[0];
            primeiraDif = false;
            cont++;
        }
        
        for (int i = 0, j = 1; i < (N - 1); i++, j++) {
            if (numeros[j] - numeros[i] == diferenca) {
                continue;
            } else {
                diferenca = numeros[j] - numeros[i];
                cont++;
            }
        }
    }
    
    cout << cont << endl;
    
    return 0;
}
