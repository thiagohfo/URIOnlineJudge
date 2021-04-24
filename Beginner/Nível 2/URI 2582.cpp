//
//  URI 2582.cpp
//  Pratica
//
//  Created by Thiago Henrique on 03/03/2018.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main () {
    string musicas[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS",
        "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!",
        "RAR?", "WIFI ANTENNAS"};
    int C, X, Y;
    
    cin >> C;
    
    for (int i = 0; i < C; i++) {
        cin >> X >> Y;
        
        cout << musicas[X + Y] << endl;
    }
    
    return 0;
}
