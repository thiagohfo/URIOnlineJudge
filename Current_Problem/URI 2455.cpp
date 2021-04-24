//
//  URI 2455.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 20/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int P1 = 0, C1 = 0, P2 = 0, C2 = 0, L1 = 0, L2 = 0;
    
    cin >> P1 >> C1 >> P2 >> C2;
    
    L1 = P1 * C1;
    L2 = P2 * C2;
    
    if (L1 == L2) {
        cout << "0" << endl;
    } else if (L1 > L2) {
        cout << "-1" << endl;
    } else {
        cout << "1" << endl;
    }
    
    return 0;
}
