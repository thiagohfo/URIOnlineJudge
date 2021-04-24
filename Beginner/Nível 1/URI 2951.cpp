//
//  URI 2951.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 05/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, G = 0, X = 0, total = 0;
    char temp;
    
    cin >> N >> G;
    
    char* runas = new char[N];
    int* valores = new int[N];
    
    for (int i = 0; i < N; i++) {
        cin >> *(runas + i) >> *(valores + i);
    }
    
    cin >> X;
    
    for (int i = 0; i < X; i++) {
        cin >> temp;
        
        for (int j = 0; j < N; j++) {
            if (temp == *(runas + j)) {
                total += *(valores + j);
                
                break;
            }
        }
    }
    
    cout << total << endl;
    
    if (total >= G) {
        cout << "You shall pass!" << endl;
    } else {
        cout << "My precioooous" << endl;
    }
    
    return 0;
}
