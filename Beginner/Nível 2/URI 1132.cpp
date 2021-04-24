//
//  URI 1132.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int X, Y, temp, soma = 0;
    
    cin >> X;
    cin >> Y;
    
    if(X > Y){
        temp = X;
        X = Y;
        Y = temp;
    }
    
    for (int i = X; i <= Y; i++) {
        if(i % 13 != 0){
            soma += i;
        }
    }
    
    cout << soma << endl;
    
    return 0;
}
