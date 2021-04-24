//
//  URI 1864.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    string frase = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cout << frase[i];
    }
    
    cout << endl;
    
    return 0;
}
