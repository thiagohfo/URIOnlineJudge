//
//  URI 2763.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    char* cpf = new char[14];
    
    cin >> cpf;
    
    for (int i = 0; i < 14; i++) {
        if (i == 3 || i == 7 || i == 11) {
            cout << endl;
        } else {
            cout << cpf[i];
        }
    }
    
    cout << endl;
    
    return 0;
}
