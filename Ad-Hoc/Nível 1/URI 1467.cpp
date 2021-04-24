//
//  URI 1467.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int zeroUm[3];
    
    while (cin >> zeroUm[0] >> zeroUm[1] >> zeroUm[2]) {
        if (zeroUm[0] == zeroUm [1] && zeroUm[1] == zeroUm[2]) {
            cout << '*' << endl;
        } else if (zeroUm[0] != zeroUm[1] && zeroUm[2] == zeroUm[1]) {
            cout << 'A' << endl;
        } else if (zeroUm[0] == zeroUm[2] && zeroUm[0] != zeroUm[1]) {
            cout << 'B' << endl;
        } else if (zeroUm[0] == zeroUm[1] && zeroUm[1] != zeroUm[2]) {
            cout << 'C' << endl;
        }
    }
    
    return 0;
}
