//
//  URI 1176.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    unsigned long long int fibonacci[60];
    int T, N;
    
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    cin >> T;
    
    for(int j = 0; j < T; j++) {
        cin >> N;
        
        for(int i = 2; i <= N; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
    
        cout << "Fib(" << N << ") = " << fibonacci[N] << endl;
    }
    
    return 0;
}
