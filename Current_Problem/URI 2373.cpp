//
//  URI 2373.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 27/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, coposQuebrados = 0, copos = 0, latas = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> latas >> copos;
        
        if (latas > copos) {
            coposQuebrados += copos;
        }
    }
    
    cout << coposQuebrados << endl;
    
    return 0;
}
