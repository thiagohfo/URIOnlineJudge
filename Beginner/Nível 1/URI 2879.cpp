//
//  URI 2879.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, jogada = 0, cont = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> jogada;
        
        if (jogada != 1) {
            cont++;
        }
    }
    
    cout << cont << endl;
}
