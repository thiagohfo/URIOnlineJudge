//
//  URI 2377.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 14/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int L = 0, D = 0, K = 0, P = 0;
    
    cin >> L >> D;
    cin >> K >> P;
    
    cout << (L * K) + ((L / D) * P) << endl;
    
    return 0;
}
