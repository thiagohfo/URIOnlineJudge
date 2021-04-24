//
//  URI 2640_2.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 25/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<unsigned long long int>> matriz;
vector<vector<unsigned long long int>> maxLinhas;
vector<vector<unsigned long long int>> maxColunas;
unsigned long long int caixasRoubadas = 0;
int r = 0, c = 0;

void tirarCaixas (int t_i, int t_j) {
    if (matriz[t_i][t_j] > 1) {
        caixasRoubadas += matriz[t_i][t_j] - 1;
        matriz[t_i][t_j] = 1;
    }
}

void mostrarMatriz () {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matriz[i][j] << " ";
        }
        
        cout << endl;
    }
}

bool podeTirar (int t_i, int t_j) {
    bool tirarLinha = false, tirarColuna = false, t_return = false;
    
    for (int k = 0; k < c; k++) {
        if (k != t_j && matriz[t_i][k] == maxLinhas[t_i][0] && (matriz[t_i][k] < maxColunas[k][0] || maxColunas[k][1] > 1)) {
            tirarColuna = true;
        }
    }
    
    for (int k = 0; k < r; k++) {
        if (k != t_i && matriz[k][t_j] == maxColunas[t_j][0] && (matriz[k][t_j] < maxLinhas[k][0] || maxLinhas[k][1] > 1)) {
            tirarLinha = true;
        }
    }
    
    if (tirarColuna && tirarLinha) {
        t_return = true;
    }
    
    return t_return;
}

int main (int argc, char* argv[]) {
    cin >> r >> c;
    
    matriz.reserve(r);
    matriz.resize(r, vector<unsigned long long int> (c, 0));
    maxLinhas.reserve(r);
    maxLinhas.resize(r, vector<unsigned long long int> (2, 0));
    maxColunas.reserve(c);
    maxColunas.resize(c, vector<unsigned long long int> (2, 0));
    
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
            if (matriz[i][j] == 0) {
                continue;
            }
   
            if (matriz[i][j] == maxLinhas[i][0] && matriz[i][j] < maxColunas[j][0] && maxLinhas[i][1] > 1) {
                tirarCaixas(i, j);
                maxLinhas[i][1]--;
            }
            
            if (matriz[i][j] == maxColunas[j][0] && matriz[i][j] < maxLinhas[i][0] && maxColunas[j][1] > 1) {
                tirarCaixas(i, j);
                maxColunas[j][1]--;
            }
            
            if (matriz[i][j] < maxLinhas[i][0] && matriz[i][j] < maxColunas[j][0]) {
                tirarCaixas(i, j);
            }
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matriz[i][j] == 0) {
                continue;
            }
            
            if (maxLinhas[i][0] == maxColunas[j][0] && podeTirar(i, j)) {
                unsigned long long int tempCaixas = 0;
                int cont = 0;
                
                for (int k = 0; k < c; k++) {
                    if (k != j && matriz[i][k] == maxLinhas[i][0] && (matriz[i][k] < maxColunas[k][0] || maxColunas[k][1] > 1)) {
                        if (matriz[i][k] == maxColunas[k][0]) {
                            maxColunas[k][1]--;
                        }
                        
                        if (cont > 0) {
                            maxLinhas[i][1]--;
                        }
                        
                        tempCaixas = matriz[i][k];
                        tirarCaixas(i, k);
                        cont++;
                    } else if (k == j && matriz[i][k] == maxLinhas[i][0]) {
                        cont++;
                    }
                }
                
                cont = 0;
                
                for (int k = 0; k < r; k++) {
                    if (k != i && matriz[k][j] == maxColunas[j][0] && (matriz[k][j] < maxLinhas[k][0] || maxLinhas[k][1] > 1)) {
                        if (matriz[k][j] == maxLinhas[k][0]) {
                            maxLinhas[k][1]--;
                        }
                        
                        if (cont > 0) {
                            maxColunas[j][1]--;
                        }
                        
                        tempCaixas = matriz[k][j];
                        tirarCaixas(k, j);
                        cont++;
                    } else if (k == i && matriz[k][j] == maxColunas[j][0]) {
                        cont++;
                    }
                }
                
                tirarCaixas(i, j);
                caixasRoubadas -= (tempCaixas - 1);
                matriz[i][j] = tempCaixas;
            }
        }
    }
    
    mostrarMatriz();
    
    cout << caixasRoubadas << endl;
    
    return 0;
}
