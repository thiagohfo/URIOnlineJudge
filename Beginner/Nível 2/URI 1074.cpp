//
//  URI 1074.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, N_temp;
    
    cin >> N;
    
    if(N > 10000) {
        N = 10000;
    }
    
    for(int i = 0; i < N; i++) {
        cin >> N_temp;
        
        if(N_temp == 0) {
            cout << "NULL" << endl;
        }
        else if(N_temp % 2 == 0 && N_temp > 0) {
            cout << "EVEN POSITIVE" << endl;
        } else if(N_temp % 2 == 0 && N_temp < 0) {
            cout << "EVEN NEGATIVE" << endl;
        }
        else if(N_temp % 2 != 0 && N_temp > 0) {
            cout << "ODD POSITIVE" << endl;
        } else {
            cout << "ODD NEGATIVE" << endl;
        }
        
    }
 
    return 0;
}
