//
//  Acionista por um dia.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 19/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    long int N = 0, D = 0, C = 0, investimento = 0, menorValor = 9999999, maiorValor = 0;
    long int maiorInvestimento = 0;
    int indMenor = 0, indMaior = 0, indMaiorInvestimento = 0;
    vector<vector<long int>> dias;
    vector<long int> investimentos;
    vector<string> acoes;
    bool tentaDeNovo = true;
    
    cin >> N >> D >> C;
    
    dias.reserve(N);
    dias.resize(N, (vector<long int> (D, 0)));
    acoes.reserve(N);
    acoes.resize(N);
    investimentos.reserve(N);
    investimentos.resize(N, 0);
    
    for (int i = 0; i < N; i++) {
        cin >> acoes[i];
        
        for (int j = 0; j < D; j++) {
            cin >> dias[i][j];
        }
    }
    
    for (int k = 0; k < N; k++) {
        indMenor = 0;
        indMaior = 1;
        investimento = 0;
        maiorValor = 0;
        menorValor = 9999999;
        tentaDeNovo = true;
        
        if (D == 1) {
            continue;
        } else {
            do {
                for (int i = indMenor; i < D - 1; i++) {
                    if (dias[k][i] < menorValor) {
                        menorValor = dias[k][i];
                        indMenor = i;
                    }
                }
                
                for (int i = indMaior; i < D; i++) {
                    if (dias[k][i] > maiorValor && i > indMenor && dias[k][i] > menorValor) {
                        maiorValor = dias[k][i];
                        indMaior = i;
                    }
                }
                
                if (indMaior < indMenor || indMenor == D - 1) {
                    tentaDeNovo = false;
                    continue;
                } else {
                    investimento += ((menorValor * 500) * -1) + (C * -1);
                    investimento += (maiorValor * 500) + (C * -1);
                    
                    indMenor++;
                    indMaior++;
                    menorValor = 9999999;
                    maiorValor = 0;
                }
            } while (tentaDeNovo);
            
            investimentos[k] = investimento;
        }
    }
    
    for (int i = 0; i < N; i++) {
        if (investimentos[i] > maiorInvestimento) {
            maiorInvestimento = investimentos[i];
            indMaiorInvestimento = i;
        }
    }
    
    if (maiorInvestimento == 0) {
        cout << "None" << " " << 0 << endl;
    } else {
        cout << acoes[indMaiorInvestimento] << " " << maiorInvestimento << endl;
    }
    
    return 0;
}
