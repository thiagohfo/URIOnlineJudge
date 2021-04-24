//
//  URI 2812.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 15/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    
    int N = 0, M = 0, contImp = 0, contImpAux = 0;
    vector<int> Mi, vetImp, vetImpMaior, vetImpMenor;
    bool maior = true;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> M;
        
        Mi.clear();
        Mi.reserve(M);
        Mi.resize(M, 0);
        contImp = 0;
        
        for (int j = 0; j < M; j++) {
            cin >> Mi[j];
            
            if (Mi[j] % 2 != 0) {
                contImp++;
            }
        }
        
        vetImp.clear();
        vetImp.reserve(contImp);
        vetImp.resize(contImp, 0);
        contImpAux = 0;
        
        if (contImp > 0) {
            for (int j = 0; j < M; j++) {
                if (Mi[j] % 2 != 0) {
                    vetImp[contImpAux] = Mi[j];
                    contImpAux++;
                }
            }
            
            vetImpMaior = vetImp;
            vetImpMenor = vetImp;
            
            sort(vetImpMaior.begin(), vetImpMaior.end(), greater<int>());
            sort(vetImpMenor.begin(), vetImpMenor.end());
            
            int auxMaior = 0, auxMenor = 0;
            maior = true;
            
            for (int j = 0; j < contImp; j++) {
                if (maior) {
                    vetImp[j] = vetImpMaior[auxMaior];
                    auxMaior++;
                    maior = false;
                } else if (!maior) {
                    vetImp[j] = vetImpMenor[auxMenor];
                    auxMenor++;
                    maior = true;
                }
            }
            
            for (int j = 0; j < contImp; j++) {
                if (j == contImp - 1) {
                    cout << vetImp[j];
                } else {
                    cout << vetImp[j] << " ";
                }
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
