//
//  URI 2653.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 09/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main (int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    
    bool adiciona = true;
    string temp;
    vector<string> joias;

    while (cin >> temp) {
        adiciona = true;
        
        for (int i = 0; i < joias.size(); i++) {
            if (joias[i] == temp) {
                adiciona = false;
            }
        }
        
        if (adiciona == true) {
            joias.push_back(temp);
        }
    }
    
    cout << joias.size() << endl;
    
    return 0;
}
