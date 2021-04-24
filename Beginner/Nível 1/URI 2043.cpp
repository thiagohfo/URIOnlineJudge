//
//  URI 2043.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 02/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0;
    
    cin >> N;
    
    if (N >= 86) {
        cout << 'A' << endl;
    } else if (N >= 61) {
        cout << 'B' << endl;
    } else if (N >= 36) {
        cout << 'C' << endl;
    } else if (N >= 1) {
        cout << 'D' << endl;
    } else {
        cout << 'E' << endl;
    }
    
    return 0;
}
