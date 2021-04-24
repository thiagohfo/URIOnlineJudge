//
//  URI 2172.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long long int exp, xp_dado;
    int multiplicador;
    
    while(cin >> multiplicador >> exp){
        xp_dado = multiplicador * exp;
        
        if(multiplicador == 0 && exp == 0){
            return 0;
        }
        else{
            cout << xp_dado << endl;
        }
    }
    
    return 0;
}
