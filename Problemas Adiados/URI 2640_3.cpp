//
//  URI 2640_3.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 03/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<unsigned long long int>> matriz;
vector<vector<unsigned long long int>> maxLinhas;
vector<vector<unsigned long long int>> maxColunas;
vector<int> matchR;
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

bool testeRowMax (int t_i, int t_v) {
    bool t_return = false;
    
    for (int j = 0; j < c; j++) {
        if (j != t_v && matriz[t_i][j] == maxLinhas[t_i][0]) {
            t_return = true;
            break;
        }
    }
    
    return t_return;
}

bool testeColMax (int t_u, int t_j) {
    bool t_return = false;
    
    for (int i = 0; i < r; i++) {
        if (i != t_u && matriz[i][t_j] == maxColunas[t_j][0]) {
            t_return = true;
            break;
        }
    }
    
    return t_return;
}

void contarMaximos () {
    for (int i = 0; i < r; i++) {
        maxLinhas[i][1] = 0;
    }
    
    for (int j = 0; j < c; j++) {
        maxColunas[j][1] = 0;
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
}

void removerCaixasNormais () {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matriz[i][j] == 0 || matriz[i][j] == 1) {
                continue;
            } else if (matriz[i][j] < maxLinhas[i][0] && matriz[i][j] < maxColunas[j][0]) {
                tirarCaixas(i, j);
            }
        }
    }
}

bool testes (int t_u, int t_v) {
    int t_i = -1, t_j = -1;
    
    for (int i = 0; i < r; i++) {
        if (i != t_u && matriz[i][t_v] == maxColunas[t_v][0]) {
            if (maxColunas[t_v][0] == maxLinhas[i][0] && maxLinhas[i][1] > 1) {
                t_i = i;
            } else if (maxColunas[t_v][0] != maxLinhas[i][0]) {
                t_i = i;
            }
        }
    }
    
    for (int j = 0; j < c; j++) {
        if (j != t_v && matriz[t_u][j] == maxLinhas[t_u][0]) {
            if (maxLinhas[t_u][0] == maxColunas[j][0] && maxColunas[j][1] > 1) {
                t_j = j;
            } else if (maxLinhas[t_u][0] != maxColunas[j][0]) {
                t_j = j;
            }
        }
    }
    
    if (t_i == -1 || t_j == -1) {
        return false;
    } else {
        return true;
    }
}

bool bpm (int u, bool seen[]) {
    for (int v = 0; v < c; v++) {
        if (maxLinhas[u][0] == maxColunas[v][0] && !seen[v] && matriz[u][v] > 0 && testes(u, v)) {
            
            seen[v] = true;
  
            if (matchR[v] < 0 || bpm(matchR[v], seen)) {
                matchR[v] = u;
                
                return true;
            }
        }
    }
    
    return false;
}
  
void maxBipartiteMatching () {
    for (int u = 0; u < r; u++) {

        bool seen[c];
        
        for (int i = 0; i < c; i++) {
            seen[i] = 0;
        }
  
        bpm(u, seen);
    }
}

void combinarCaixas () {
    for (int k = 0; k < c; k++) {
        if (matchR[k] != -1) {
            int l = matchR[k], t_i = -1, t_j = -1;
            
            for (int i = 0; i < r; i++) {
                if (matriz[i][k] == maxColunas[k][0] && testeRowMax(i, k)) {
                    t_i = i;
                }
            }
            
            for (int j = 0; j < c; j++) {
                if (matriz[l][j] == maxLinhas[l][0] && testeColMax(l, j)) {
                    t_j = j;
                }
            }
            
            if (t_i != -1 && t_j != -1) {
                if (matriz[l][k] == maxColunas[k][0]) {
                    maxColunas[k][1]--;
                }
                
                if (matriz[l][k] == maxLinhas[l][0]) {
                    maxLinhas[l][1]--;
                }
                
                tirarCaixas(l, k);
                
                if (matriz[t_i][k] == maxLinhas[t_i][0]) {
                    maxLinhas[t_i][1]--;
                }
                
                matriz[l][k] = matriz[t_i][k];
                tirarCaixas(t_i, k);
                
                if (matriz[l][t_j] == maxColunas[t_j][0]) {
                    maxColunas[t_j][1]--;
                }
                
                matriz[l][t_j] = 1;
            }
        }
    }
}

void tirarCaixasDuplicadas () {
    for (int i = 0; i < r; i++) {
         for (int j = 0; j < c; j++) {
             if (matriz[i][j] == 0 || matriz[i][j] == 1) {
                 continue;
             }
    
             if (matriz[i][j] == maxLinhas[i][0] && ((matriz[i][j] < maxColunas[j][0]) || (matriz[i][j] == maxColunas[j][0] && maxColunas[j][1] > 1)) && maxLinhas[i][1] > 1) {
                 
                 if (matriz[i][j] == maxColunas[j][0]) {
                     maxColunas[j][1]--;
                 }
                 
                 tirarCaixas(i, j);
                 maxLinhas[i][1]--;
             }
             
             if (matriz[i][j] == maxColunas[j][0] && ((matriz[i][j] < maxLinhas[i][0]) || (matriz[i][j] == maxLinhas[i][0] && maxLinhas[i][1] > 1)) && maxColunas[j][1] > 1) {
                 
                 if (matriz[i][j] == maxLinhas[i][0]) {
                     maxLinhas[i][1]--;
                 }
                 
                 tirarCaixas(i, j);
                 maxColunas[j][1]--;
             }
         }
     }
}

int main (int argc, char* argv[]) {
    cin >> r >> c;
    
    matriz.reserve(r);
    matriz.resize(r, vector<unsigned long long int> (c, 0));
    maxLinhas.reserve(r);
    maxLinhas.resize(r, vector<unsigned long long int> (2, 0));
    maxColunas.reserve(c);
    maxColunas.resize(c, vector<unsigned long long int> (2, 0));
    matchR.reserve(c);
    matchR.resize(c, -1);
    
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
    
    removerCaixasNormais();
    contarMaximos();
    
    vector<vector<unsigned long long int>> matrizTemp;
    unsigned long long int caixasRoubadasTemp = 0, caixasRoubadas1 = 0, caixasRoubadas2 = 0;
    
    matrizTemp = matriz;
    caixasRoubadasTemp = caixasRoubadas;
    caixasRoubadas = 0;
    
    maxBipartiteMatching();
    combinarCaixas();
    tirarCaixasDuplicadas();
    
    caixasRoubadas1 = caixasRoubadas;
    caixasRoubadas = 0;
    matriz = matrizTemp;
    contarMaximos();
    
    tirarCaixasDuplicadas();
    maxBipartiteMatching();
    combinarCaixas();
    
    caixasRoubadas2 = caixasRoubadas;
    caixasRoubadas = caixasRoubadasTemp;
    
    if (caixasRoubadas1 > caixasRoubadas2) {
        caixasRoubadas += caixasRoubadas1;
    } else if (caixasRoubadas2 > caixasRoubadas1) {
        caixasRoubadas += caixasRoubadas2;
    } else if (caixasRoubadas1 == caixasRoubadas2) {
        caixasRoubadas += caixasRoubadas1;
    }
    
    mostrarMatriz();
    
    cout << caixasRoubadas << endl;

    return 0;
}

