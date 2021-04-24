//
//  URI 1020.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, A = 0, M = 0, D = 0;
    
    cin >> N;
    
    D = (N % 365) % 30;
    M = (N % 365) / 30;
    A = N / 365;
    
    cout << A << " ano(s)" << endl;
    cout << M << " mes(es)" << endl;
    cout << D << " dia(s)" << endl;
    
    return 0;
}
