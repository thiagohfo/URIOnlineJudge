//
//  URI 2434.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 27/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, saldo = 0, menorSaldo = 0, tempSaldo = 0;
    
    cin >> N >> saldo;
    
    menorSaldo = saldo;
    
    for (int i = 0; i < N; i++) {
        cin >> tempSaldo;
        
        saldo += tempSaldo;
        
        if (saldo < menorSaldo) {
            menorSaldo = saldo;
        }
    }
    
    cout << menorSaldo << endl;
    
    return 0;
}
