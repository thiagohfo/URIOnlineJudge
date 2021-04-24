//
//  URI 1142.cpp
//  Pratica
//
//  Created by Thiago Henrique on 13/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, numeros = 1;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            cout << numeros++ << " ";
        }
        
        cout << "PUM" << endl;
        numeros++;
    }
    
    return 0;
}
