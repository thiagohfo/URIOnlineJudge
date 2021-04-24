//
//  URI 2717.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 04/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, A = 0, B = 0;
    
    cin >> N;
    cin >> A >> B;
    
    if ((A + B) <= N) {
        cout << "Farei hoje!" << endl;
    } else {
        cout << "Deixa para amanha!" << endl;
    }
    
    return 0;
}
