//
//  URI 1428.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 14/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int T = 0, N = 0, M = 0;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        
        cout << (N / 3) * (M / 3) << endl;
    }
    
    return 0;
}
