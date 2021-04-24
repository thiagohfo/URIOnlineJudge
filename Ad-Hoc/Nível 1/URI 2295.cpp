//
//  URI 2295.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    vector<float> precos (4, 0.0);
    float alcool = 0.0, gasolina = 0.0;
    
    for (int i = 0; i < 4; i++) {
        cin >> precos[i];
    }
    
    alcool = precos[2] / precos[0];
    gasolina = precos[3] / precos[1];
    
    if (alcool > gasolina) {
        cout << 'A' << endl;
    } else if (gasolina > alcool) {
        cout << 'G' << endl;
    } else {
        cout << 'G' << endl;
    }
    
    return 0;
}
