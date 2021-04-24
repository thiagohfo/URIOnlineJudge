//
//  URI 2826.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main (int argc, char* argv[]) {
    string A, B;
    int TA = 0, TB = 0, menor = 0, TA_TB = 0;
    
    cin >> A;
    cin >> B;
    
    TA = int(A.size());
    TB = int(B.size());
    
    if (TA > TB) {
        menor = TB;
    } else if (TB > TA){
        menor = TA;
    } else {
        menor = TA;
    }
    
    for (int i = 0; i < menor; i++) {
        if (int(A[i]) < int(B[i])) {
            TA_TB = 1;
            
            break;
        } else if (int(B[i] < int(A[i]))) {
            TA_TB = 2;
            
            break;
        }
    }
    
    if (TA_TB == 0) {
        if (TA == menor && TB != menor) {
            TA_TB = 1;
        } else if (TB == menor && TA != menor) {
            TA_TB = 2;
        }
    }
    
    if (TA_TB == 1) {
        cout << A << endl;
        cout << B << endl;
    } else if (TA_TB == 2) {
        cout << B << endl;
        cout << A << endl;
    } else {
        cout << A << endl;
        cout << B << endl;
    }
    
    return 0;
}
