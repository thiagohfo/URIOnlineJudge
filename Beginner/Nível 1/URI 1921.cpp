//
//  URI 1921.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long long int N, resultado;
    
    cin >> N;
    
    resultado = (N * (N - 3)) / 2;
    
    cout << resultado << endl;
    
    return 0;
}
