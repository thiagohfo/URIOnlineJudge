//
//  URI 1145.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    long long Y;
    int X, cont2 = 0;
    
    cin >> X >> Y;
    
    for (int i = 1; i <= Y; i++) {
        if(cont2 < X - 1 && i < Y){
            cout << i << " ";
            cont2++;
        }
        else{
            cout << i << endl;
            cont2 = 0;
        }
    }
    
    return 0;
}
