//
//  URI 2765.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 11/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
    string frase, parte1, parte2;
    bool preVirgula = true;
    
    getline(cin, frase);
    
    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == ',' && preVirgula == true) {
            preVirgula = false;
            
            continue;
        }
        
        if (preVirgula == true) {
            parte1 += frase[i];
        } else {
            parte2 += frase[i];
        }
    }
    
    cout << parte1 << endl;
    cout << parte2 << endl;
    
    return 0;
}
