//
//  URI 1095.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int I = 1, J = 60;
    
    while(J >= 0){
        cout << "I=" << I << " J=" << J << endl;
        
        I += 3;
        J -= 5;
    }
    
    return 0;
}
