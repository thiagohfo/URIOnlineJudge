//
//  URI 2167.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <array>

using namespace std;

int main(){
    int N, posicao = 0;
    bool queda = false;
    
    cin >> N;
    
    int rpms[N];
    
    cin >> rpms[0];
    
    for(int i = 1; i < N; i++){
        cin >> rpms[i];
        
        if(rpms[i] < rpms[i - 1] && queda == false){
            queda = true;
            posicao = i + 1;
        }
    }
    
    cout << posicao << endl;
    
    return 0;
}
