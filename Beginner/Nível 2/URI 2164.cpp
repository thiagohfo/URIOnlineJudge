//
//  URI 2164.cpp
//  Pratica
//
//  Created by Thiago Henrique on 14/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double resposta, N, termo1, termo2;
    
    cin >> N;
    
    termo1 = ((1 + sqrt(5)) / 2);
    termo2 = ((1 - sqrt(5)) / 2);
    termo1 = pow(termo1, N);
    termo2 = pow(termo2, N);
    resposta = (termo1 - termo2) / sqrt(5);
    
    cout << fixed;
    cout.precision(1);
    cout << resposta << endl;
    
    return 0;
}
