//
//  URI 2381.cpp
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
    int N = 0, K = 0;
    vector<string> nomes;
    
    cin >> N >> K;
    
    nomes.resize(N);
    
    for (int i = 0; i < N; i++) {
        cin >> nomes[i];
    }
    
    sort(nomes.begin(), nomes.end());
    
    cout << nomes[K - 1] << endl;
    
    return 0;
}
