//
//  URI 1171.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, X = 0;
    vector<int> numeros;
    vector<int> diferentes;
    
    numeros.resize(2001, 0);
    diferentes.reserve(N);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> X;
        
        if (numeros[X] == 0) {
            diferentes.push_back(X);
        }
        
        numeros[X]++;
    }
    
    sort(diferentes.begin(), diferentes.end());
    
    for (int i = 0; i < diferentes.size(); i++) {
        cout << diferentes[i] << " aparece " << numeros[diferentes[i]] << " vez(es)" << endl;
    }
    
    return 0;
}
