//
//  URI 2787.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int L = 0, C = 0;
    
    cin >> L >> C;
    
    if (L % 2 == 0 && C % 2 ==0) {
        cout << "1" << endl;
    } else if (L % 2 == 0 && C % 2 != 0) {
        cout << "0" << endl;
    } else if (L % 2 != 0 && C % 2 == 0) {
        cout << "0" << endl;
    } else {
        cout << "1" << endl;
    }
    
    return 0;
}
