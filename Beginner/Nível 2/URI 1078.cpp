//
//  URI 1078.cpp
//  Pratica
//
//  Created by Thiago Henrique on 13/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    for(int i = 0; i < 10; i++){
        cout << i + 1 << " x " << N << " = " << (i + 1) * N << endl;
    }
    
    return 0;
}
