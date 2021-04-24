//
//  URI 2749.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 09/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void tracos () {
    for (int i = 0; i < 39; i++) {
        cout << "-";
    }
}

void emBranco () {
    cout << "|";
    
    for (int i = 1; i < 38; i++) {
        cout << " ";
    }
    
    cout << "|";
}

void meio (int t_pos) {
    cout << "|";
    
    for (int i = 1; i < 39; i++) {
        if (i == t_pos) {
            cout << "x = 35";
            
            i += 6;
        } else {
            cout << " ";
        }
    }
    
    cout << "|";
}

int main (int argc, char* argv[]) {
    tracos();
    
    cout << endl;
    
    meio(1);
    
    cout << endl;
    
    emBranco();
    
    cout << endl;
    
    meio(16);
    
    cout << endl;
    
    emBranco();
    
    cout << endl;
    
    meio(32);
    
    cout << endl;
    
    tracos();
    
    cout << endl;
    
    return 0;
}
