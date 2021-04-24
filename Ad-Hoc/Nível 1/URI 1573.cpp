//
//  URI 1573.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 23/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char* argv[]) {
    int A = 0, B = 0, C = 0, volume = 0, aCubo = 0;
    bool continua = true;
    
    while (continua) {
        cin >> A >> B >> C;
        
        volume = 0;
        aCubo = 0;
        
        if (A == 0 && B == 0 && C == 0) {
            break;
        } else {
            volume = A * B * C;
            aCubo = int(pow(double(volume), 1.0 / 3.0));
            
            cout << aCubo << endl;
        }
    }
    
    return 0;
}
