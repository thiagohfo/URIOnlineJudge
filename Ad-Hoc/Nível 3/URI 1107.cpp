//
//  URI 1107.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 06/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int arc, char* argv[]) {
    int A = 0, C = 0;
    bool condicao = true;
    
    cin >> A >> C;
    
    if (A == 0 && C == 0) {
        condicao = false;
    } else {
        condicao = true;
    }
    
    while (condicao) {
        vector<int> numeros(C, 0);
        int liga = 0, profundidadeAnt = 0, profundidadeNov = 0;
        
        for (int i = 0; i < C; i++) {
            cin >> numeros[i];
        }
        
        vector<int> niveis(A, 0);
        
        profundidadeAnt = (A - numeros[0]) - 1;
        
        for (int i = 0; i <= profundidadeAnt; i++) {
            niveis[i]++;
        }
        
        if (C > 1) {
            for (int i = 1; i < C; i++) {
                profundidadeNov = (A - numeros[i]) - 1;
                
                if (profundidadeNov > profundidadeAnt) {
                    for (int j = profundidadeAnt + 1; j <= profundidadeNov; j++) {
                        niveis[j]++;
                    }
                }
                
                profundidadeAnt = profundidadeNov;
            }
        }
        
        for (int i = 0; i < A; i++) {
            liga += niveis[i];
        }
        
        cout << liga << endl;
        
        niveis.clear();
        numeros.clear();
        
        cin >> A >> C;
        
        if (A == 0 && C == 0) {
            condicao = false;
        } else {
            condicao = true;
        }
    }
    
    return 0;
}
