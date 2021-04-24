//
//  URI 2523.cpp
//  Pratica
//
//  Created by Thiago Henrique on 28/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, temp;
    string letras;
    
    while(cin >> letras){
        cin >> N;
        
        for(int i = 0; i < N; i++){
            cin >> temp;
            
            cout << letras[temp - 1];
        }
        
        cout << endl;
    }
    
    return 0;
}
