//
//  URI 1064.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
    float numero, media = 0;
    int contp = 0;
    
    cout << fixed;
    cout.precision(1);
    
    for(int i = 0; i < 6; i++) {
        cin >> numero;
        
        if(numero > 0) {
            contp++;
            media += numero;
        }
    }
    
    cout << contp << " valores positivos" << endl;
    cout << media / contp << endl;
 
    return 0;
}
