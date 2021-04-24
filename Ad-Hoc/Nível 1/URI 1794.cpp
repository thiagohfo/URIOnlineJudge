//
//  URI 1794.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, LA = 0, LB = 0, SA = 0, SB = 0;
    bool lavar = false, secar = false;
    
    cin >> N;
    cin >> LA >> LB;
    cin >> SA >> SB;
    
    if (N >= LA && N <= LB) {
        lavar = true;
    }
    
    if (N >= SA && N <= SB) {
        secar = true;
    }
    
    if (lavar && secar) {
        cout << "possivel" << endl;
    } else {
        cout << "impossivel" << endl;
    }
    
    return 0;
}
