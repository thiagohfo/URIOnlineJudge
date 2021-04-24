//
//  URI 2388.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 25/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, T = 0, V = 0, total = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> T >> V;
        
        total += T * V;
    }
    
    cout << total << endl;
    
    return 0;
}
