//
//  URI 2630.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 11/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char* argv[]) {
    int T = 0, P = 0;
    vector<int> RGB(3, 0);
    string metodo;
    
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> metodo;
        cin >> RGB[0] >> RGB[1] >> RGB[2];
        
        if (metodo == "eye") {
            P = (RGB[0] * 0.30) + (RGB[1] * 0.59) + (RGB[2] * 0.11);
        } else if (metodo == "mean") {
            P = (RGB[0] + RGB[1] + RGB[2]) / 3;
        } else if (metodo == "min") {
            P = *min_element(RGB.begin(), RGB.end());
        } else if (metodo == "max") {
            P = *max_element(RGB.begin(), RGB.end());
        }
        
        cout << "Caso #" << i + 1 << ": " << P << endl;
    }
    
    return 0;
}
