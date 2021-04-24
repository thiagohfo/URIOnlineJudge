//
//  URI 1149.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A, N, total = 0;
    
    cin >> A >> N;
    
    while(N <= 0){
        cin >> N;
    }
    
    for (int i = 0; i <= N - 1; i++) {
        total += A + i;
    }
    
    cout << total << endl;
    
    return 0;
}
