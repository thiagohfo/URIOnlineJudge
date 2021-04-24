//
//  URI 1065.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int contp = 0, numero;
    
    for(int i = 0; i < 5; i++) {
        cin >> numero;
        
        if(numero % 2 == 0) {
            contp++;
        }
    }
    
    cout << contp << " valores pares" << endl;
 
    return 0;
}
