//
//  URI 2456.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 06/11/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char* argv[]) {
    vector<int> cartas (5, 0);
    vector<int> cartasCopia (5, 0);
    
    for (int i = 0; i < 5; i++) {
        cin >> cartas[i];
    }
    
    cartasCopia = cartas;
    sort(cartasCopia.begin(), cartasCopia.end());
    
    if (cartasCopia == cartas) {
        cout << "C" << endl;
    } else {
        sort(cartasCopia.begin(), cartasCopia.end(), greater<int>());
        
        if (cartasCopia == cartas) {
            cout << "D" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    
    return 0;
}
