//
//  URI 2640.cpp
//  Pratica
//
//  Created by Thiago Henrique on 11/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int r = 0, c = 0, l_c_tamanho = 0, cont = 0;
long int temp = 0, caixas_roubadas = 0;
vector<vector<long int>> matriz;
vector<long int> max_linha;
vector<long int> max_coluna;
vector<vector<bool>> podeTrocar;

bool retirar (int t_i, int t_j) {
    bool retirarL = false;
    bool retirarC = false;
    bool t_return = false;
    
    if (matriz[t_i][t_j] == max_linha[t_i]) {
        for (int i = 0; i < c; i++) {
            if (matriz[t_i][i] == max_linha[t_i] && t_j != i) {
                retirarL = true;
            }
        }
    } else {
        retirarL = true;
    }
    
    if (matriz[t_i][t_j] == max_coluna[t_j]) {
        for (int i = 0; i < r; i++) {
            if (matriz[i][t_j] == max_coluna[t_j] && t_i != i) {
                retirarC = true;
            }
        }
    } else {
        retirarC = true;
    }
    
    if (retirarL && retirarC) {
        t_return = true;
    }
    
    return t_return;
}

int main () {
    ios_base::sync_with_stdio(false);
    
    cin >> r >> c;
    
    matriz.reserve(r);
    matriz.resize(r, vector<long int> (c, 0));
    podeTrocar.reserve(r);
    podeTrocar.resize(r, vector<bool> (c, 0));
    max_linha.reserve(r);
    max_linha.resize(r);
    max_coluna.reserve(c);
    max_coluna.resize(c);
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < r; i++) {
        temp = 0;
        
        for (int j = 0; j < c; j++) {
            if (matriz[i][j] > temp) {
                temp = matriz[i][j];
            }
        }
        
        max_linha[i] = temp;
    }
    
    for (int i = 0; i < c; i++) {
        temp = 0;
        
        for (int j = 0; j < r; j++) {
            if (matriz[j][i] > temp) {
                temp = matriz[j][i];
            }
        }
        
        max_coluna[i] = temp;
    }
    //Reorganizar
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matriz[i][j] == 0 || matriz[i][j] == 1) {
                continue;
            }
            
            if (matriz[i][j] == max_coluna[j] && matriz[i][j] != max_linha[i]) {
                for (int k = 0; k < r; k++) {
                    for (int m = 0; m < c; m++) {
                        if (k != i && m != j && matriz[i][j] == matriz[k][m] && matriz[k][m] == max_linha[k] && matriz[k][m] != max_coluna[m]) {
                            if (matriz[k][j] != 0 && matriz[k][j] != max_linha[k] && matriz[k][j] != max_coluna[j]) {
                                temp = matriz[i][j];
                                caixas_roubadas += (matriz[k][j] - 1);
                                matriz[k][j] = temp;
                                matriz[i][j] = 1;
                            }
                        }
                    }
                }
            } else if (matriz[i][j] != max_coluna[j] && matriz[i][j] == max_linha[i]) {
                for (int k = 0; k < r; k++) {
                    for (int m = 0; m < c; m++) {
                        if (k != i && m != j && matriz[i][j] == matriz[k][m] && matriz[k][m] == max_linha[k] && matriz[k][m] != max_coluna[m]) {
                           if (matriz[i][m] != 0 && matriz[i][m] != max_linha[i] && matriz[i][m] != max_coluna[m]) {
                                temp = matriz[i][j];
                                caixas_roubadas += (matriz[i][m] - 1);
                                matriz[i][m] = temp;
                                matriz[i][j] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    //Retirar
    for (int i = 0; i < r; i++) {
        for (int j = c - 1; j >= 0; j--) {
            if (matriz[i][j] == 0 || matriz[i][j] == 1) {
                continue;
            } else {
                if (retirar(i, j)) {
                    caixas_roubadas += (matriz[i][j] - 1);
                    matriz[i][j] = 1;
                }
            }
        }
    }
    
    
    cout << caixas_roubadas << endl;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matriz[i][j] << " ";
        }
        
        cout << endl;
    }
    
    cout << "Fim" << endl;
    
    return 0;
}
