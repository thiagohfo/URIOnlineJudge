//
//  URI 2552.cpp
//  Pratica
//
//  Created by Thiago Henrique on 07/03/2018.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    int N, M;
    
    while (cin >> N >> M) {
        int tabuleiro[N][M];
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> tabuleiro[i][j];
                
                if (tabuleiro[i][j] == 1) {
                    tabuleiro[i][j] = 9;
                }
            }
        }
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (tabuleiro[i][j] == 9) {
                    if (j > 0 && tabuleiro[i][j - 1] != 9) {
                        tabuleiro[i][j - 1]++;
                    }
                    
                    if (j < M - 1 && tabuleiro[i][j + 1] != 9) {
                        tabuleiro[i][j + 1]++;
                    }
                    
                    if (i > 0 && tabuleiro[i - 1][j] != 9) {
                        tabuleiro[i - 1][j]++;
                    }
                    
                    if (i < N - 1 && tabuleiro[i + 1][j] != 9) {
                        tabuleiro[i + 1][j]++;
                    }
                }
            }
        }
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << tabuleiro[i][j];
            }
            
            cout << endl;
        }
    }
    
    return 0;
}
