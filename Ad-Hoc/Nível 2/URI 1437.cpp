//
//  URI 1437.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 15/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0;
    char pos = 'N', comando = 'N';
    
    cin >> N;
    
    while (N != 0) {
        if (N == 0) {
            break;
        }
        
        pos = 'N';
        
        for (int i = 0; i < N; i++) {
            cin >> comando;
            
            if (comando == 'E') {
                if (pos == 'N') {
                    pos = 'O';
                } else if (pos == 'L') {
                    pos = 'N';
                } else if (pos == 'S') {
                    pos = 'L';
                } else if (pos == 'O') {
                    pos = 'S';
                }
            } else if (comando == 'D') {
                if (pos == 'N') {
                    pos = 'L';
                } else if (pos == 'L') {
                    pos = 'S';
                } else if (pos == 'S') {
                    pos = 'O';
                } else if (pos == 'O') {
                    pos = 'N';
                }
            }
        }
        
        cout << pos << endl;
        
        cin >> N;
    }
    
    return 0;
}
