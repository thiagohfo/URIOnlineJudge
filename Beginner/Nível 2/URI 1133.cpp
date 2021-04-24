//
//  URI 1133.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int X, Y, temp;
    
    cin >> X;
    cin >> Y;
    
    if(X > Y){
        temp = X;
        X = Y;
        Y = temp;
    }
    
    for (int i = X + 1; i < Y; i++) {
        if(i % 5 == 2 || i % 5 == 3){
            cout << i << endl;
        }
    }
    
    return 0;
}
