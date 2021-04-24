//
//  URI 2635.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 11/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, Q = 0;
    string temp;
    vector<int> achadas;
    vector<int> tamPesquisadas;
    vector<string> pesquisadas;
    vector<string> pesquisas;
    
    cin >> N;
    
    pesquisadas.reserve(N);
    
    for (int i = 0; i < N; i++) {
        cin >> temp;
        
        pesquisadas.push_back(temp);
    }
    
    cin >> Q;
    
    pesquisas.reserve(Q);
    achadas.reserve(Q);
    achadas.resize(Q, 0);
    tamPesquisadas.reserve(Q);
    tamPesquisadas.resize(Q, 0);
    
    for (int i = 0; i < Q; i++) {
        cin >> temp;
        
        pesquisas.push_back(temp);
        
        for (int j = 0; j < N; j++) {
            if (pesquisadas[j].find(temp) != string::npos) {
                achadas[i]++;
                
                if (pesquisadas[j].size() > tamPesquisadas[i]) {
                    tamPesquisadas[i] = int(pesquisadas[j].size());
                }
            }
        }
        
        if (achadas[i] == 0) {
            achadas[i] = -1;
        }
    }
    
    for (int i = 0; i < Q; i++) {
        if (achadas[i] == -1) {
            cout << achadas[i] << endl;
        } else {
            cout << achadas[i] << " " << tamPesquisadas[i] << endl;
        }
    }
    
    return 0;
}
