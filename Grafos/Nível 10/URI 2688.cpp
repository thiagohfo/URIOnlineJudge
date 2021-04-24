//
//  URI 2688_1.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 01/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

bool testaCorredor (int t_i, int t_j) {
    bool t_linha = false, t_coluna = false, t_return = false;
    
    if (t_i == 0 || t_i == 12) {
        t_linha = true;
    } else if (t_j > 6) {
        if (t_i == 6 || t_i == 9) {
            t_linha = true;
        }
    }
    
    if (t_j == 0 || t_j == 3 || t_j == 6) {
        t_coluna = true;
    }
    
    if (t_linha == true || t_coluna == true) {
        t_return = true;
    }
    
    return t_return;
}

int main(int argc, char* argv[]) {
    int WBJ = 0, mediaAdja = 0, contAdja = 0, menorDist = 99, indMenor = 0, menorMedia = 99;
    int *t_i, *t_j;
    int posI[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int posJ[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    vector<vector<int>> refeitorio (13, vector<int> (13, 0));
    vector<vector<int>> cadeirasVazias;
    vector<int> mediasAdjacentes;
    vector<int> menoresDist;
    vector<int> temp (2, 0);
    
    while (cin >> WBJ) {
        cadeirasVazias.reserve(20);
        
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 13; j++) {
                cin >> refeitorio[i][j];
                
                if (refeitorio[i][j] == 0) {
                    temp[0] = i;
                    temp[1] = j;
                        
                    cadeirasVazias.push_back(temp);
                }
            }
        }
        
        menoresDist.resize(cadeirasVazias.size(), 0);
        mediasAdjacentes.resize(cadeirasVazias.size(), 0);
        
        for (int i = 0; i < cadeirasVazias.size(); i++) {
            t_i = &cadeirasVazias[i][0];
            t_j = &cadeirasVazias[i][1];
            
            for (int j = 0; j < 8; j++) {
                if (!testaCorredor(*t_i + posI[j], *t_j + posJ[j])) {

                    mediaAdja += refeitorio[*t_i + posI[j]][*t_j + posJ[j]];
                    contAdja++;
                }
            }
            
            mediasAdjacentes[i] = mediaAdja / contAdja;
            
            mediaAdja = 0;
            contAdja = 0;
        }
        
        for (int i = 0; i < cadeirasVazias.size(); i++) {
            if (cadeirasVazias[i][1] < 6) {
                menoresDist[i] += 5 - cadeirasVazias[i][1];
                menoresDist[i] += cadeirasVazias[i][0] - 1;
            } else {
                menoresDist[i] += cadeirasVazias[i][1] - 6;
                menoresDist[i] += cadeirasVazias[i][0] - 1;
            }
            
            if (menoresDist[i] < menorDist && mediasAdjacentes[i] < menorMedia && mediasAdjacentes[i] < WBJ) {
                menorDist = menoresDist[i];
                indMenor = i;
            }
        }
        
        cout << "linha > " << cadeirasVazias[indMenor][1] + 1 << " coluna > " << cadeirasVazias[indMenor][0] + 1 << endl;
        
        mediasAdjacentes.clear();
        cadeirasVazias.clear();
        menoresDist.clear();
        temp[0] = 0;
        temp[1] = 0;
        mediaAdja = 0;
        contAdja = 0;
        menorDist = 99;
        menorMedia = 99;
        indMenor = 0;
    }
    
    return 0;
}
