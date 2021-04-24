//
//  URI 1140.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 17/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
    char primeiroChar;
    string frase;
    bool tautograma = true;
    
    while (true) {
        getline(cin, frase);
        
        if (frase == "*") {
            break;
        } else {
            primeiroChar = char(frase[0]);
            
            for (int i = 1; i < frase.size(); i++) {
                if (char(frase[i - 1]) == ' ') {
                    if (tolower(primeiroChar) != tolower(char(frase[i]))) {
                        tautograma = false;
                        break;
                    }
                }
            }
            
            if (tautograma == true) {
                cout << 'Y' << endl;
            } else {
                cout << 'N' << endl;
            }
            
            tautograma = true;
        }
    }
    
    return 0;
}
