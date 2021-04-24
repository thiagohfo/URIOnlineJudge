//
//  URI 1181.cpp
//  Pratica
//
//  Created by Thiago Henrique on 19/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    float M[12][12], operacao = 0;
    int L;
    char T;
    
    cin >> L;
    cin >> T;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }
    
    for(int i = 0; i < 12; i++){
        operacao += M[L][i];
    }
    
    cout << fixed;
    cout.precision(1);
    
    if(T == 'S'){
        cout << operacao << endl;
    }
    else{
        cout << operacao / 12 << endl;
    }
    
    return 0;
}
