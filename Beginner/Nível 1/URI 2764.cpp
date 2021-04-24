//
//  URI 2764.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    char* data = new char[8];
    
    cin >> data;
    
    cout << data[3] << data[4] << "/" << data[0] << data[1] << "/" << data[6] << data[7] << endl;
    cout << data[6] << data[7] << "/" << data[3] << data[4] << "/" << data[0] << data[1] << endl;
    cout << data[0] << data[1] << "-" << data[3] << data[4] << "-" << data[6] << data[7] << endl;
    
    return 0;
}
