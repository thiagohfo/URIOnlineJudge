//
//  URI 2862.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 03/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int T = 0, poder = 0;
    
    while (cin >> T) {
        for (int i = 0; i < T; i++) {
            cin >> poder;
            
            if (poder > 8000) {
                cout << "Mais de 8000!" << endl;
            } else {
                cout << "Inseto!" << endl;
            }
        }
    }
    
    return 0;
}
