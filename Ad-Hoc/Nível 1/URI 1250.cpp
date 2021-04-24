//
//  URI 1250.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    vector<int> tiros;
    string acoes;
    int N = 0, T = 0, atingido = 0;
    
    while (cin >> N) {
        for (int k = 0; k < N; k++) {
            cin >> T;
            
            tiros.resize(T, 0);
            
            for (int i = 0; i < T; i++) {
                cin >> tiros[i];
            }
            
            cin >> acoes;
            
            for (int i = 0; i < T; i++) {
                if (tiros[i] <= 2 && acoes[i] == 'S') {
                    atingido++;
                } else if (tiros[i] > 2 && acoes[i] == 'J') {
                    atingido++;
                }
            }
            
            cout << atingido << endl;
            
            acoes.clear();
            tiros.clear();
            atingido = 0;
        }
    }
    
    return 0;
}
