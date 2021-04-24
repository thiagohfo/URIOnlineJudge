//
//  URI 2779.cpp
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
    int N = 0, M = 0, temp = 0, cont = 0;
    
    cin >> N >> M;
    
    vector<int> figuras(N, 0);
    
    for (int i = 0; i < M; i++) {
        cin >> temp;
        
        if (figuras[temp - 1] == 0) {
            figuras[temp - 1] = 1;
            cont++;
        } else {
            figuras[temp - 1] = 1;
        }
    }
    
    cout << N - cont << endl;
    
    return 0;
}
