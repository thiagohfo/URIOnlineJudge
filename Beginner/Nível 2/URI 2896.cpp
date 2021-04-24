//
//  URI 2896.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 02/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int T = 0, N = 0, K = 0, resultado = 0;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> N >> K;
        
        resultado = 0;
        resultado = (N % K) + (N / K);
        
        cout << resultado << endl;
    }
    
    return 0;
}
