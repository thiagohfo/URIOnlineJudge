//
//  URI 1192.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 25/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, D1 = 0, D2 = 0, saida = 0;
    char A = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> D1 >> A >> D2;
        
        if (D1 == D2) {
            saida = D1 * D2;
        } else if (isupper(A)) {
            saida = D2 - D1;
        } else if (!isupper(A)) {
            saida = D1 + D2;
        }
        
        cout << saida << endl;
    }
    
    return 0;
}
