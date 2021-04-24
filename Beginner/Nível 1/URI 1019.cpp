//
//  URI 1019.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, H = 0, M = 0, S = 0;
    
    cin >> N;
    
    S = N % 60;
    M = (N / 60) % 60;
    H = (N / 60) / 60;
    
    cout << H << ":" << M << ":" << S << endl;
    
    return 0;
}
