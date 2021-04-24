//
//  URI 1026.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    unsigned long int A, B, resultado;
    
    while(cin >> A >> B){
        resultado = A ^ B;
        
        cout << resultado << endl;
    }
    
    return 0;
}
