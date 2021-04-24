//
//  URI 2375.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 27/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, L = 0, A = 0, P = 0;
    
    cin >> N;
    cin >> A >> L >> P;
    
    if (N <= A && N <= L && N <= P) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }
    
    return 0;
}
