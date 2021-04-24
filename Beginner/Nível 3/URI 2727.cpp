//
//  URI 2727.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 09/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, contPonto = 0, contEspaco = 0, linha = 0, coluna = 0;
    string temp;
    char alfabeto[9][3];
    
    for (int i = 97; i <= 122; i++) {
        alfabeto[linha][coluna] = char(i);
        
        coluna++;
        
        if (coluna == 3) {
            linha++;
            coluna = 0;
        }
    }
    
    while (cin >> N) {
        cin.ignore();
        
        for (int i = 0; i < N; i++) {
            getline(cin, temp);
            
            for (int i = 0; i < temp.size(); i++) {
                if (temp[i] == '.' && contEspaco < 1) {
                    contPonto++;
                } else if (temp[i] == ' ') {
                    contEspaco++;
                }
            }
            
            cout << alfabeto[contEspaco][contPonto - 1] << endl;
            
            contPonto = 0;
            contEspaco = 0;
        }
    }
    
    return 0;
}
