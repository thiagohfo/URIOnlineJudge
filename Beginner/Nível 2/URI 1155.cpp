//
//  URI 1155.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    double S = 0;
    
    for (int i = 1; i <= 100; i++) {
        S += double(1) / i;
    }
    
    cout << fixed;
    cout.precision(2);
    cout << S << endl;
    
    return 0;
}
