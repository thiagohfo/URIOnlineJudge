//
//  URI 2791.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int posicao = 0;
    int feijoes[4];
    
    for (int i = 0; i < 4; i++) {
        cin >> feijoes[i];
        
        if (feijoes[i] == 1) {
            posicao = i + 1;
        }
    }
    
    cout << posicao << endl;
    
    return 0;
}
