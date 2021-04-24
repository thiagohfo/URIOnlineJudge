//
//  URI 1984.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    long long int N;
    string num_invertido;
    
    cin >> N;
    
    num_invertido = to_string(N);
    reverse(num_invertido.begin(), num_invertido.end());
    
    cout << num_invertido << endl;
    
    return 0;
}
