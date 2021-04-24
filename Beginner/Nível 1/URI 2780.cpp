//
//  URI 2780.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int D = 0, pontos = 0;
    
    cin >> D;
    
    if (D <= 800) {
        pontos = 1;
    } else if (D <= 1400) {
        pontos = 2;
    } else {
        pontos = 3;
    }
    
    cout << pontos << endl;
    
    return 0;
}
