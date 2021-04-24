//
//  URI 2875.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 23/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int M = 0, N = 0, cont0 = 0, xI = 0, xJ = 0, rotacao = 180;
    vector<vector<int>> matriz;
    char temp;
    string saida;
    
    while (cin >> M >> N) {
        cont0 = 0;
        rotacao = 180;
        saida.clear();
        matriz.clear();
        matriz.reserve(M);
        matriz.resize(M, vector<int> (N, 0));
        
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                cin >> temp;
                
                if (temp == 'X') {
                    matriz[i][j] = 2;
                    xI = i;
                    xJ = j;
                } else if (temp == '1') {
                    matriz[i][j] = 1;
                } else if (temp == '0') {
                    matriz[i][j] = 0;
                    cont0++;
                }
            }
        }
        
        while (cont0 > 0) {
            if (xI > 0 && matriz[xI - 1][xJ] == 0) {
                if (rotacao == 0) {
                    saida += "F ";
                } else if (rotacao == 90) {
                    saida += "L ";
                    saida += "F ";
                } else if (rotacao == 270) {
                    saida += "R ";
                    saida += "F ";
                }
                
                matriz[xI][xJ] = 1;
                rotacao = 0;
                xI--;
                cont0--;
            } else if (xJ < N - 1 && matriz[xI][xJ + 1] == 0) {
                if (rotacao == 0) {
                    saida += "R ";
                    saida += "F ";
                } else if (rotacao == 180) {
                    saida += "L ";
                    saida += "F ";
                } else if (rotacao == 90) {
                    saida += "F ";
                }
                
                matriz[xI][xJ] = 1;
                rotacao = 90;
                xJ++;
                cont0--;
            } else if (xJ > 0 && matriz[xI][xJ - 1] == 0) {
                if (rotacao == 0) {
                    saida += "L ";
                    saida += "F ";
                } else if (rotacao == 180) {
                    saida += "R ";
                    saida += "F ";
                } else if (rotacao == 270) {
                    saida += "F ";
                }

                matriz[xI][xJ] = 1;
                rotacao = 270;
                xJ--;
                cont0--;
            } else if (xI < M - 1 && matriz[xI + 1][xJ] == 0) {
                if (rotacao == 90) {
                    saida += "R ";
                    saida += "F ";
                } else if (rotacao == 180) {
                    saida += "F ";
                } else if (rotacao == 270) {
                    saida += "L ";
                    saida += "F ";
                }
                
                matriz[xI][xJ] = 1;
                rotacao = 180;
                xI++;
                cont0--;
            }
        }
        
        saida += 'E';
        
        cout << saida << endl;
    }
    
    return 0;
}
