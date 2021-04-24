//
//  URI 2459.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 10/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

struct linha {
    int origem;
    int destino;
    int custo;
    
    linha () {}
};

bool check (vector<int> &caminho, int t_cidadeTest, int t_posCidades) {
    for (int i = 0; i < t_posCidades; i++) {
        if (caminho[i] == t_cidadeTest) {
            return false;
        }
    }
    
    return true;
}

int main (int argc, char* argv[]) {
    int N = 0, R = 0, F = 0, custoTotal = 0, posCidades = 0;
    
    cin >> N >> F >> R;
    
    vector<bool> cidadesFerro(N, 0);
    vector<bool> cidadesRodo(N, 0);
    vector<int> caminho(N, 0);
    vector<linha> ferrovias(F);
    vector<linha> rodovias(R);
    
    for (int i = 0; i < F; i++) {
        cin >> ferrovias[i].origem >> ferrovias[i].destino >> ferrovias[i].custo;
        cidadesFerro[ferrovias[i].origem - 1] = 1;
        cidadesFerro[ferrovias[i].destino - 1] = 1;
    }
    
    for (int i = 0; i < R; i++) {
        cin >> rodovias[i].origem >> rodovias[i].destino >> rodovias[i].custo;
        cidadesRodo[rodovias[i].origem - 1] = 1;
        cidadesRodo[rodovias[i].destino - 1] = 1;
    }
    
    if (F == 1) {
        caminho[posCidades++] = ferrovias[0].origem;
        caminho[posCidades++] = ferrovias[0].destino;
        custoTotal += ferrovias[0].custo;
    } else {
        int tempPos = -1, tempCusto = 1001;
        
        for (int i = 0; i < F; i++) {
            if (tempCusto > ferrovias[i].custo) {
                tempCusto = ferrovias[i].custo;
                tempPos = i;
            }
        }
        
        caminho[posCidades++] = ferrovias[tempPos].origem;
        caminho[posCidades++] = ferrovias[tempPos].destino;
        custoTotal += ferrovias[tempPos].custo;
    }
    
    while (posCidades < N) {
        int tempPosCidades = posCidades, tempPos = -1, tempCusto = 1001;
        bool origem = false;
        
        for (int i = 0; i < tempPosCidades; i++) {
            for (int j = 0; j < F; j++) {
                if (caminho[i] == ferrovias[j].origem && check(caminho, ferrovias[j].destino, tempPosCidades)) {
                    if (ferrovias[j].custo < tempCusto) {
                        tempPos = j;
                        tempCusto = ferrovias[j].custo;
                        origem = true;
                    }
                } else if (caminho[i] == ferrovias[j].destino && check(caminho, ferrovias[j].origem, tempPosCidades)) {
                    if (ferrovias[j].custo < tempCusto) {
                        tempPos = j;
                        tempCusto = ferrovias[j].custo;
                        origem = false;
                    }
                }
            }
        }
        
        if (tempPos == -1) {
            for (int i = 0; i < tempPosCidades; i++) {
                for (int j = 0; j < R; j++) {
                    if (caminho[i] == rodovias[j].origem && check(caminho, rodovias[j].destino, tempPosCidades)) {
                        if (rodovias[j].custo < tempCusto) {
                            tempPos = j;
                            tempCusto = rodovias[j].custo;
                            origem = true;
                        }
                    } else if (caminho[i] == rodovias[j].destino && check(caminho, rodovias[j].origem, tempPosCidades)) {
                        if (rodovias[j].custo < tempCusto) {
                            tempPos = j;
                            tempCusto = rodovias[j].custo;
                            origem = false;
                        }
                    }
                }
            }
            
            if (origem == true) {
                caminho[posCidades++] = rodovias[tempPos].destino;
                custoTotal += rodovias[tempPos].custo;
            } else {
                caminho[posCidades++] = rodovias[tempPos].origem;
                custoTotal += rodovias[tempPos].custo;
            }
        } else {
            if (origem == true) {
                caminho[posCidades++] = ferrovias[tempPos].destino;
                custoTotal += ferrovias[tempPos].custo;
            } else {
                caminho[posCidades++] = ferrovias[tempPos].origem;
                custoTotal += ferrovias[tempPos].custo;
            }
        }
    }
    
    cout << custoTotal << endl;
    
    return 0;
}
