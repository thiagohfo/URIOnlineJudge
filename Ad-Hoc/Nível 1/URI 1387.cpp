//
//  URI 1387.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int L = 0, R = 0;
    
    while (cin >> L >> R) {
        if (L == 0 && R == 0) {
            break;
        }
        
        cout << L + R << endl;
    }
    
    return 0;
}
