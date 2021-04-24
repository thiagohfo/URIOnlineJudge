//
//  URI 2159.cpp
//  Pratica
//
//  Created by Thiago Henrique on 13/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double N, P, M;
    
    cin >> N;
    cout << fixed;
    cout.precision(1);
    
    P = N / log(N);
    M = N / log(N) * 1.25506;
    
    cout << P << " " << M << endl;
    
    return 0;
}
