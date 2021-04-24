//
//  URI 2687.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 13/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char* argv[]) {
    int Q = 0, L = 0, mudanca = 0;
    float antidoto = 0;
    vector<vector<int>> area;
    
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        cin >> L;
        
        antidoto = 0;
        area.clear();
        area.reserve(L);
        area.resize(L, vector<int> (L, 0));
        
        for (int j = 0; j < L; j++) {
            for (int k = 0; k < L; k++) {
                cin >> area[j][k];
            }
        }
        
        do {
            mudanca = 0;
            
            for (int j = 0; j < L; j++) {
                for (int k = 0; k < L; k++) {
                    if (area[j][k] == 0 && (j == 0 || j == (L - 1) || k == 0 || k == (L - 1))) {
                        area[j][k] = 2;
                        mudanca++;
                    } else if (area[j][k] == 0 && (area[j - 1][k] == 2 || area[j + 1][k] == 2 ||
                                                   area[j][k - 1] == 2 || area[j][k + 1] == 2)) {
                        area[j][k] = 2;
                        mudanca++;
                    }
                }
            }
            
            for (int j = (L - 1); j >= 0; j--) {
                for (int k = (L - 1); k >= 0; k--) {
                    if (area[j][k] == 0 && (j == 0 || j == (L - 1) || k == 0 || k == (L - 1))) {
                        area[j][k] = 2;
                        mudanca++;
                    } else if (area[j][k] == 0 && (area[j - 1][k] == 2 || area[j + 1][k] == 2 ||
                                                   area[j][k - 1] == 2 || area[j][k + 1] == 2)) {
                        area[j][k] = 2;
                        mudanca++;
                    }
                }
            }
        } while (mudanca != 0);
        
        for (int j = 0; j < L; j++) {
            for (int k = 0; k < L; k++) {
                if (area[j][k] != 2) {
                    antidoto++;
                }
            }
        }
        
        antidoto = antidoto / float(2);
        
        cout << fixed << setprecision(2) << antidoto << endl;
    }
    
    return 0;
}
