//
//  URI 1071.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int X, Y, soma, minimo, maximo;
    
    cin >> X;
    cin >> Y;
    
    if(X > Y) {
        maximo = X;
        minimo = Y;
    } else if(X < Y) {
        maximo = Y;
        minimo = X;
    }
    
    for(int i = minimo + 1; i < maximo; i++) {
        if(i % 2 == 1 || i % 2 == -1) {
            soma += i;
        }
    }
    
    cout << soma << endl;
 
    return 0;
}
