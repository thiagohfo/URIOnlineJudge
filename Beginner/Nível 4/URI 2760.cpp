//
//  URI 2760.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 15/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
    string A, B, C;
    
    getline(cin, A);
    getline(cin, B);
    getline(cin, C);

    cout << A << B << C << endl;
    cout << B << C << A << endl;
    cout << C << A << B << endl;
    cout << A.substr(0, 10) << B.substr(0, 10) << C.substr(0, 10) << endl;
    
    return 0;
}
