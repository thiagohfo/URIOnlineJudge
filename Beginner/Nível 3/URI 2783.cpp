//
//  URI 2783.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 11/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, C = 0, M = 0, cont = 0;
    
    cin >> N >> C >> M;
    
    vector<int> carimbadas(C, 0);
    vector<bool> encontradas(C, false);
    vector<int> compradas(M, 0);
    
    for (int i = 0; i < C; i++) {
        cin >> carimbadas[i];
    }
    
    for (int i = 0; i < M; i++) {
        cin >> compradas[i];
        
        for (int j = 0; j < C; j++) {
            if (compradas[i] == carimbadas[j] && encontradas[j] == false) {
                encontradas[j] = true;
            }
        }
    }
    
    for (int i = 0; i < C; i++) {
        if (encontradas[i] == false) {
            cont++;
        }
    }
    
    cout << cont << endl;
    
    return 0;
}
