//
//  URI 1515.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 06/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, indPlaneta = 0, maisAntigo = 9999;
    vector<string> planetas;
    vector<vector<int>> dados;
    planetas.reserve(100);
    dados.reserve(100);
    
    while (cin >> N) {
        if (N == 0) {
            break;
        }
        
        planetas.resize(N);
        dados.resize(N, vector<int> (3, 0));
        
        for (int i = 0; i < N; i++) {
            cin >> planetas[i] >> dados[i][0] >> dados[i][1];
            
            dados[i][2] = dados[i][0] - dados[i][1];
        }
        
        for (int j = 0; j < N; j++) {
            if (dados[j][2] < maisAntigo) {
                indPlaneta = j;
                maisAntigo = dados[j][2];
            }
        }
        
        cout << planetas[indPlaneta] << endl;
        
        maisAntigo = 9999;
        indPlaneta = 0;
        planetas.clear();
        dados.clear();
    }
    
    return 0;
}
