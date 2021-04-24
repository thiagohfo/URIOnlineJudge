//
//  URI 2640.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 04/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long int>> matriz;
vector<vector<long long int>> maxLinhas;
vector<vector<long long int>> maxColunas;
long long int caixasRoubadas = 0;
int r = 0, c = 0;

void tirarCaixas (int t_i, int t_j) {
    if (matriz[t_i][t_j] > 1) {
        caixasRoubadas += matriz[t_i][t_j] - 1;
        matriz[t_i][t_j] = 1;
    }
}

void moverCaixas (int t_i, int t_j, int t_iD, int t_jD) {
    matriz[t_iD][t_jD] = matriz[t_i][t_j];
    matriz[t_i][t_j] = 1;
}

void mostrarMatriz () {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matriz[i][j] << " ";
        }
        
        cout << endl;
    }
}

int main (int argc, char* argv[]) {
    cin >> r >> c;
    
    matriz.reserve(r);
    matriz.resize(r, vector<long long int> (c, 0));
    maxLinhas.reserve(r);
    maxLinhas.resize(r, vector<long long int> (2, 0));
    maxColunas.reserve(c);
    maxColunas.resize(c, vector<long long int> (2, 0));
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matriz[i][j];
            
            if (matriz[i][j] > maxColunas[j][0]) {
                maxColunas[j][0] = matriz[i][j];
            }
            
            if (matriz[i][j] > maxLinhas[i][0]) {
                maxLinhas[i][0] = matriz[i][j];
            }
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matriz[i][j] == maxColunas[j][0]) {
                maxColunas[j][1]++;
            }
            
            if (matriz[i][j] == maxLinhas[i][0]) {
                maxLinhas[i][1]++;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matriz[i][j] < 2) {
                continue;
            } else if (matriz[i][j] == maxLinhas[i][0] && matriz[i][j] == maxColunas[j][0] && maxLinhas[i][1] == 1 && maxColunas[j][1] == 1) {
                continue;
            } else if (matriz[i][j] < maxLinhas[i][0] && matriz[i][j] < maxColunas[j][0]) {
                tirarCaixas(i, j);
            }
            
            if (matriz[i][j] == maxLinhas[i][0] && matriz[i][j] == maxColunas[j][0] && maxLinhas[i][1] > 1 && maxColunas[j][1] > 1) {
                for (int k = 0; k < c; k++) {
                    if (k != j && matriz[i][k] == matriz[i][j] && maxLinhas[i][1] > 1 && (matriz[i][k] < maxColunas[k][0] || maxColunas[k][1] > 1)) {
                        if (maxColunas[k][0] == matriz[i][k]) {
                            maxColunas[k][1]--;
                        }
                        
                        tirarCaixas(i, k);
                        maxLinhas[i][1]--;
                    }
                }
                
                for (int k = 0; k < r; k++) {
                    if (k != i && matriz[k][j] == matriz[i][j] && maxColunas[j][1] > 1 && (matriz[k][j] < maxLinhas[k][0] || maxLinhas[k][1] > 1)) {
                        if (matriz[k][j] == maxLinhas[k][0]) {
                            maxLinhas[k][1]--;
                        }
                        
                        tirarCaixas(k, j);
                        maxColunas[j][1]--;
                    }
                }
            }
                
            if (matriz[i][j] == maxColunas[j][0] && (matriz[i][j] < maxLinhas[i][0] || (matriz[i][j] == maxLinhas[i][0] && maxLinhas[i][1] > 1))) {
                for (int k = 0; k < r; k++) {
                    if (k != i && maxLinhas[k][0] == matriz[i][j]) {
                        for (int l = 0; l < c; l++) {
                            if (l != j && matriz[k][l] == matriz[i][j] && (maxColunas[l][0] > matriz[k][l] || maxColunas[l][1] > 1)) {
                                if (matriz[k][j] > 0 && (matriz[k][j] <= maxLinhas[k][0])) {
                                    if (matriz[i][j] == maxLinhas[i][0]) {
                                        maxLinhas[i][1]--;
                                    }
                                    
                                    if (matriz[k][l] == maxColunas[l][0]) {
                                        maxColunas[l][1]--;
                                    }
                                    
                                    tirarCaixas(k, j);
                                    tirarCaixas(i, j);
                                    moverCaixas(k, l, k, j);
                                    
                                    //mostrarMatriz();
                                    break;
                                }
                            }
                        }
                    }
                }
            } else if (matriz[i][j] == maxLinhas[i][0] && (matriz[i][j] < maxColunas[j][0] || (matriz[i][j] == maxColunas[j][0] && maxColunas[j][1] > 1))) {
                for (int k = 0; k < c; k++) {
                    if (k != j && maxColunas[k][0] == matriz[i][j]) {
                        for (int l = 0; l < r; l++) {
                            if (l != i && matriz[l][k] == matriz[i][j] && (maxLinhas[l][0] > matriz[l][k] || maxLinhas[l][1] > 1)) {
                                if (matriz[i][k] > 0 && (matriz[i][k] <= maxColunas[k][0])) {
                                    if (matriz[i][j] == maxColunas[j][0]) {
                                        maxColunas[j][1]--;
                                    }
                                    
                                    if (matriz[l][k] == maxLinhas[l][0]) {
                                        maxLinhas[l][1]--;
                                    }
                                    
                                    tirarCaixas(i, k);
                                    tirarCaixas(i, j);
                                    moverCaixas(l, k, i, k);
                                    
                                    //mostrarMatriz();
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            
            if ((matriz[i][j] == maxLinhas[i][0] && maxLinhas[i][0] > 1) || (matriz[i][j] == maxColunas[j][0] && maxColunas[j][1] > 1)) {
                if (matriz[i][j] == maxLinhas[i][0] && maxLinhas[i][1] > 1 && (maxColunas[j][0] != matriz[i][j] || maxColunas[j][1] > 1)) {
                    if (matriz[i][j] == maxColunas[j][0]) {
                        maxColunas[j][1]--;
                    }
                    
                    tirarCaixas(i, j);
                    maxLinhas[i][1]--;
                } else if (matriz[i][j] == maxColunas[j][0] && maxColunas[j][1] > 1 && (maxLinhas[i][0] != matriz[i][j] || maxLinhas[i][1] > 1)) {
                    if (matriz[i][j] == maxLinhas[i][0]) {
                        maxLinhas[i][1]--;
                    }
                    
                    tirarCaixas(i, j);
                    maxColunas[j][1]--;
                }
            }
        }
    }
    
    mostrarMatriz();
    
    cout << caixasRoubadas << endl;
    
    return 0;
}
