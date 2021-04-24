//
//  URI 2479.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 14/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, comportada = 0, naoComportada = 0;
    char temp;
    vector<string> nomes;
    
    cin >> N;
    
    nomes.resize(N);
    
    for (int i = 0; i < N; i++) {
        cin >> temp >> nomes[i];
        
        if (temp == '-') {
            naoComportada++;
        } else {
            comportada++;
        }
    }
    
    sort(nomes.begin(), nomes.end());
    
    for (int i = 0; i < N; i++) {
        cout << nomes[i] << endl;
    }
    
    cout << "Se comportaram: " << comportada << " | Nao se comportaram: " << naoComportada << endl;
    
    return 0;
}
