//
//  URI 2679.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 14/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    long int X = 0;
    
    cin >> X;
    
    if ((X % 2) == 0) {
        cout << X + 2 << endl;
    } else if ((X % 2) == 1) {
        cout << ++X << endl;
    }
    
    return 0;
}
