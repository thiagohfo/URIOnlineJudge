//
//  URI 2581.cpp
//  Pratica
//
//  Created by Thiago Henrique on 03/03/2018.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main () {
    int N;
    string temp;
    
    while (cin >> N) {
        for (int i = 0; i < N; i++) {
            cin.ignore();
            getline(cin, temp);
            cout << "I am Toorg!" << endl;
        }
    }
    
    return 0;
}
