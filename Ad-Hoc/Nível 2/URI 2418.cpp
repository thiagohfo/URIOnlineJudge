//
//  URI 2418.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main () {
    std::ios::sync_with_stdio();
    
    float notas[5], soma = 0;
    
    cout << fixed;
    cout.precision(1);
    
    for (int i = 0; i < 5; i++) {
        cin >> notas[i];
    }
    
    sort(notas, notas + 5);
    
    for (int i = 1; i < 4; i++) {
        soma += notas[i];
    }
    
    cout << soma << endl;
    
    return 0;
}
