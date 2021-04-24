//
//  URI 2786.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int L = 0, C = 0, totalTipo1 = 0, totalTipo2 = 0;
    
    cin >> L >> C;
    
    totalTipo1 = (L * C) + ((L - 1) * (C - 1));
    totalTipo2 = ((L - 1) * 2) + ((C - 1) * 2);
    
    cout << totalTipo1 << endl;
    cout << totalTipo2 << endl;
    
    return 0;
}
