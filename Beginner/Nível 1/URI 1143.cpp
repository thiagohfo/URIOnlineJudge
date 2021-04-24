//
//  URI 1143.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cout << i + 1 << " " << pow((i + 1), 2) << " " << (i + 1) * pow((i + 1), 2) << endl;
    }
    
    return 0;
}
