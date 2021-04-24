//
//  URI 1958.cpp
//  Pratica
//
//  Created by Thiago Henrique on 30/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long double numero;
    string temp;
    
    cout << scientific << uppercase;
    cout.precision(4);
    cin >> numero;
    
    temp = to_string(numero);
    
    if(temp[0] == '-'){
        cout << numero << endl;
    }
    else{
        cout << "+" << numero << endl;
    }
    
    return 0;
}
