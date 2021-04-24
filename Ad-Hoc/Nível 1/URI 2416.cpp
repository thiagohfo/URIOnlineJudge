//
//  URI 2416.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 14/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    long int C = 0, temp = 0;
    int N = 0;
    
    cin >> C >> N;
    
    temp = C / N;
    
    cout << (C - (N * temp)) << endl;
    
    return 0;
}
