//
//  URI 2543.cpp
//  Pratica
//
//  Created by Thiago Henrique on 08/03/2018.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    long int N;
    int I, cont = 0;
    
    while (cin >> N >> I) {
        int gameplays[N][2];
        
        for (int i = 0; i < N; i++) {
            cin >> gameplays[i][0] >> gameplays[i][1];
            
            if (gameplays[i][0] == I && gameplays[i][1] == 0) {
                cont++;
            }
        }
        
        cout << cont << endl;
        cont = 0;
    }
    
    return 0;
}
