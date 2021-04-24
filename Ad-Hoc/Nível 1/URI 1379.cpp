//
//  URI 1379.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 25/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    long long int temp = 0, C = 0;
    vector<long long int> AB (2, 0);
    
    while (cin >> AB[0] >> AB[1]) {
        if (AB[0] == 0 && AB[1] == 0) {
            break;
        } else {
            sort(AB.begin(), AB.end());
            
            temp = AB[1] - AB[0];
            C = AB[0] - temp;
        }
        
        cout << C << endl;
    }
    
    return 0;
}
