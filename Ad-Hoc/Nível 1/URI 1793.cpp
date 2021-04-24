//
//  URI 1793.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 14/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, tempo = 0;
    vector<int> pessoas;
    
    while (cin >> N) {
        if (N == 0) {
            break;
        }
        
        tempo = 0;
        pessoas.resize(N, 0);
        
        cin >> pessoas[0];
        
        if (N == 1) {
            tempo = 10;
        } else if (N > 1) {
            tempo = 10;
            
            for (int i = 1; i < N; i++) {
                cin >> pessoas[i];
                
                if ((pessoas[i] - pessoas[i - 1]) < 10) {
                    tempo += (pessoas[i] - pessoas[i - 1]);
                } else {
                    tempo += 10;
                }
            }
        }
        
        cout << tempo << endl;
    }
    
    return 0;
}
