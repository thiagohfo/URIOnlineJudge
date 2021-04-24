//
//  URI 1794.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 27/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, LA = 0, LB = 0, SA = 0, SB = 0;
    
    cin >> N;
    cin >> LA >> LB;
    cin >> SA >> SB;
    
    if (N >= LA && N <= LB && N >= SA && N <= SB) {
        cout << "possivel" << endl;
    } else {
        cout << "impossivel" << endl;
    }
    
    return 0;
}
