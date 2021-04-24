//
//  URI 2234.cpp
//  Pratica
//
//  Created by Thiago Henrique on 18/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int H = 0, P = 0;
    double media = 0;
    
    cin >> H >> P;
    
    media = double(H) / double(P);
    
    cout << fixed;
    cout.precision(2);
    cout << media << endl;
    
    return 0;
}
