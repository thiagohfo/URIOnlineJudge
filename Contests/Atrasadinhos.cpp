//
//  Atrasadinhos.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 19/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    long int N = 0, K = 0, cont = 0;
    vector<long int> alunos;
    
    cin >> N >> K;
    
    alunos.reserve(N);
    alunos.resize(N);
    
    for (int i = 0; i < N; i++) {
        cin >> alunos[i];
        
        if (alunos[i] <= 0) {
            cont++;
        }
    }
    
    if (cont >= K) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
