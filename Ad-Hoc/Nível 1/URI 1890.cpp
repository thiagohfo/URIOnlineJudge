//
//  URI 1890.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char* argv[]) {
    int T = 0, C = 0, D = 0;
    long long int total = 0, totalC = 0, totalD = 0;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> C >> D;
        
        if (C > 0) {
            totalC = pow(26, C);
        }
        
        if (D > 0) {
            totalD = pow(10, D);
        }
        
        if (totalC > 0 && totalD > 0) {
            total = totalC * totalD;
        } else if (totalC == 0 && totalD > 0) {
            total = totalD;
        } else if (totalC > 0 && totalD == 0) {
            total = totalC;
        }
        
        cout << total << endl;
        
        total = 0;
        totalC = 0;
        totalD = 0;
    }
    
    return 0;
}
