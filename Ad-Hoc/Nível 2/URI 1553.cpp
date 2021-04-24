//
//  URI 1553.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, K = 0, temp = 0, cont = 0;
    vector<int> numeros(1001, 0);
    vector<bool> diferentes(1001, false);
    
    cin >> N >> K;
    
    while (N != 0 && K != 0) {
        for (int i = 0; i < N; i++) {
            cin >> temp;
            
            numeros[temp]++;
            
            if (numeros[temp] >= K && diferentes[temp] == false) {
                diferentes[temp] = true;
                cont++;
            }
        }
        
        cout << cont << endl;
        
        cin >> N >> K;
        
        cont = 0;
        temp = 0;
        
        for (int i = 0; i < 1001; i++) {
            numeros[i] = 0;
            diferentes[i] = false;
        }
    }
    
    return 0;
}
