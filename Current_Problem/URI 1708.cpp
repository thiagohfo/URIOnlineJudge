//
//  URI 1708.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 27/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int X = 0, Y = 0, xFixo = 0, yFixo = 0;
    bool parar = false;
    
    cin >> xFixo >> yFixo;
    
    while (!parar) {
        X += xFixo;
        Y += yFixo;
        
        if (abs(X - Y) >= xFixo) {
            parar = true;
        }
    }
    
    cout << (X / xFixo) + 1 << endl;
    
    return 0;
}
