//
//  URI 2950.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 05/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, X = 0, Y = 0;
    float ICM = 0;
    
    cin >> N >> X >> Y;
    
    ICM = float(N) / float(X + Y);
    
    cout << fixed << setprecision(2) << ICM << endl;
    
    return 0;
}
