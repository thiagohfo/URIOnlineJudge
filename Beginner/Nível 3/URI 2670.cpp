//
//  URI 2670.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 04/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    int A1 = 0, A2 = 0, A3 = 0;
    vector<int> resultados(3, 0);
    
    cin >> A1 >> A2 >> A3;
    
    resultados[0] = (A2 * 2) + (A3 * 4);
    resultados[1] = (A1 * 2) + (A3 * 2);
    resultados[2] = (A1 * 4) + (A2 * 2);
    
    sort(resultados.begin(), resultados.end());
    
    cout << resultados[0] << endl;

    return 0;
}
