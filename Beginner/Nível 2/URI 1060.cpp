//
//  URI 1060.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
    float numero;
    int contp = 0;
    
    for(int i = 0; i < 6; i++) {
        cin >> numero;
        
        if(numero > 0) {
            contp++;
        }
    }
    
    cout << contp << " valores positivos" << endl;
 
    return 0;
}
