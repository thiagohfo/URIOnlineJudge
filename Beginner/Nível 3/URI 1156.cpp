//
//  URI 1156.cpp
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
    int j = 1;
    
    for (int i = 1; i <= 39; i += 2) {
        S += double(i) / j;
        j *= 2;
    }
    
    cout << fixed;
    cout.precision(2);
    cout << S << endl;
    
    return 0;
}
