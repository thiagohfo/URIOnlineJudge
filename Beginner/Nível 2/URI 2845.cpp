//
//  URI 2845.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, max = 0;
    
    cin >> N;
    
    int* duendes = new int[N];
    
    for (int i = 0; i < N; i++) {
        cin >> duendes[i];
        
        if (duendes[i] > max) {
            max = duendes[i];
        }
    }
    
    cout << max + 1 << endl;
    
    return 0;
}
