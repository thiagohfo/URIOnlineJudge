//
//  URI 1397.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, A = 0, B = 0, pontos[2] = {0, 0};
    
    while (cin >> N) {
        if (N == 0) {
            break;
        }
        
        pontos[0] = 0;
        pontos[1] = 0;
        
        for (int i = 0; i < N; i++) {
            cin >> A >> B;
            
            if (A > B) {
                pontos[0]++;
            } else if (B > A) {
                pontos[1]++;
            }
        }
        
        cout << pontos[0] << " " << pontos[1] << endl;
    }
    
    return 0;
}
