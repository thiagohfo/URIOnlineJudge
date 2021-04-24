//
//  URI 2690.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 19/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char* argv[]) {
    string maiuscula = {"68752309146875230914687523"};
    string minuscula = {"01234567890123456789012345"};
    char frase[100];
    int N = 0, tamFrase = 0;
    
    cin >> N;
    cin.ignore();
    
    for (int i = 0; i < N; i++) {
        tamFrase = 0;

        scanf(" %[^\n]", frase);
        
        for (int j = 0; j < strlen(frase); j++) {
            if (tamFrase == 12) {
                break;
            } else if (frase[j] != ' ') {
                if (isupper(frase[j])) {
                    cout << maiuscula[(int(frase[j]) - 65)];
                } else {
                    cout << minuscula[(int(frase[j]) - 97)];
                }
        
                tamFrase++;
            }
        }
        
        cout << endl;
    }

    return 0;
}
