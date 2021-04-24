//
//  URI 2807.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0;
    
    cin >> N;
    
    vector<int> iccanobif(N, 0);
    
    iccanobif[0] = 1;
    iccanobif[1] = 1;
    
    if (N > 2) {
        for (int i = 2; i < N; i++) {
            iccanobif[i] = iccanobif[i - 2] + iccanobif[i - 1];
        }
    }
    
    for (int i = N - 1; i >= 0; i--) {
        cout << iccanobif[i];
        
        if (i != 0) {
            cout << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
