//
//  URI 2747.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 11/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void tracos () {
    for (int i = 0; i < 39; i++) {
        cout << '-';
    }
    
    cout << endl;
}

void barras () {
    cout << '|';
    
    for (int i = 1; i < 38; i++) {
        cout << ' ';
    }
    
    cout << '|';
    
    cout << endl;
}

int main (int argc, char* argv[]) {
    tracos();
    
    for (int i = 0; i < 5; i++) {
        barras();
    }
    
    tracos();
    
    return 0;
}
