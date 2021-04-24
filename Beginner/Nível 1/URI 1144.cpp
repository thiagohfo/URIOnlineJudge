//
//  URI 1144.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long long N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cout << i + 1 << " " << (i + 1) * (i + 1) << " " << (i + 1) * (i + 1) * (i + 1) << endl;
        cout << i + 1 << " " << ((i + 1) * (i + 1)) + 1 << " " << ((i + 1) * (i + 1) * (i + 1)) + 1 << endl;
    }
    
    return 0;
}
