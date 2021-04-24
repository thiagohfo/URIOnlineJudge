//
//  URI 2369.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 24/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int M = 0, valor = 0;
    
    cin >> M;
    
    if (M <= 10) {
        valor = 7;
    } else if (M <= 30) {
        valor = (M - 10) + 7;
    } else if (M <= 100) {
        M -= 30;
        valor = (M * 2) + 7 + 20;
    } else if (M > 100) {
        M -= 100;
        valor = (70 * 2) + (M * 5) + 7 + 20;
    }
    
    cout << valor << endl;
    
    return 0;
}
