//
//  URI 2554.cpp
//  Pratica
//
//  Created by Thiago Henrique on 01/03/2018.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, D;
    char temp;
    bool encontro = true;
    vector <int> datas_possiveis;
    
    while(cin >> N >> D) {
        int inf[D][3 + N];
        
        for (int i = 0; i < D; i++) {
            cin >> inf[i][0] >> temp >> inf[i][1] >> temp >> inf[i][2];
            
            for (int j = 0; j < N; j++) {
                cin >> inf[i][j + 3];
                
                if (j > 0 && inf[i][j + 3] != inf[i][(j + 3) - 1]) {
                    encontro = false;
                } else if (N == 1) {
                    if (inf[i][j + 3] == 1) {
                        encontro = true;
                    } else {
                        encontro = false;
                    }
                }
            }
            
            if (encontro == true) {
                datas_possiveis.push_back(i);
            }
            
            encontro = true;
        }
        
        if (datas_possiveis.size() > 0) {
            cout << inf[datas_possiveis[0]][0] << "/" << inf[datas_possiveis[0]][1] << "/" << inf[datas_possiveis[0]][2] << endl;
        } else {
            cout << "Pizza antes de FdI" << endl;
        }
        
        datas_possiveis.clear();
    }
    
    return 0;
}
