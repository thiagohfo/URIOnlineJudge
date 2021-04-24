//
//  URI 2759.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    char A, B, C;
    
    cin >> A;
    cin >> B;
    cin >> C;
    
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
    cout << "A = " << B << ", B = " << C << ", C = " << A << endl;
    cout << "A = " << C << ", B = " << A << ", C = " << B << endl;
    
    return 0;
}
