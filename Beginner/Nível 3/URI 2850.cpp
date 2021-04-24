//
//  URI 2850.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 03/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char* argv[]) {
    string movimento;
    
    while (getline(cin, movimento)) {
        if (movimento.compare("esquerda") == 0) {
            cout << "ingles" << endl;
        } else if (movimento.compare("direita") == 0) {
            cout << "frances" << endl;
        } else if (movimento.compare("nenhuma") == 0) {
            cout << "portugues" << endl;
        } else {
            cout << "caiu" << endl;
        }
    }
    
    return 0;
}
