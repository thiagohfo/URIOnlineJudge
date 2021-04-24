//
//  URI 2949.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 05/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, racas[5] = {0, 0, 0, 0, 0};
    string temp;
    
    cin >> N;
    cin.ignore();
    
    for (int i = 0; i < N; i++) {
        getline(cin, temp);
        
        switch (temp[temp.size() - 1]) {
            case 'A':
                racas[3] += 1;
                break;
            case 'X':
                racas[0] += 1;
                break;
            case 'H':
                racas[1] += 1;
                break;
            case 'E':
                racas[2] += 1;
                break;
            case 'M':
                racas[4] += 1;
                break;
            default:
                break;
        }
    }
    
    cout << racas[0] << " Hobbit(s)" << endl;
    cout << racas[1] << " Humano(s)" << endl;
    cout << racas[2] << " Elfo(s)" << endl;
    cout << racas[3] << " Anao(s)" << endl;
    cout << racas[4] << " Mago(s)" << endl;
    
    return 0;
}
