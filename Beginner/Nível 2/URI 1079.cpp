//
//  URI 1079.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N;
    double valor1, valor2, valor3;
    
    cin >> N;
    cout << fixed;
    cout.precision(1);
    
    for(int i = 0; i < N; i++){
        cin >> valor1 >> valor2 >> valor3;
        
        cout << ((valor1 * 2) + (valor2 * 3) + (valor3 * 5)) / 10 << endl;
    }
    
    return 0;
}
