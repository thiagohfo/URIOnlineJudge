//
//  URI 2863.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 03/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int T = 0;
    
    while (cin >> T) {
        float* tempo = new float[T];
        float temp = 13;
        
        for (int i = 0; i < T; i++) {
            cin >> *(tempo + i);
            
            if (*(tempo + i) < temp) {
                temp = *(tempo + i);
            }
        }
        
        cout << temp << endl;
        
        delete[] tempo;
        tempo = NULL;
    }
    
    return 0;
}
