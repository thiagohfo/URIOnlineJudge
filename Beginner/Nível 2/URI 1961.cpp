//
//  URI 1961.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int P, N, cont = 0;
    
    cin >> P >> N;
    
    int canos[N];
    
    cin >> canos[0];
    
    for(int i = 1; i < N; i++){
        cin >> canos[i];
        
        if(abs(canos[i - 1] - canos[i]) <= P){
            cont++;
        }
    }
    
    if(cont == N - 1){
        cout << "YOU WIN" << endl;
    }
    else{
        cout << "GAME OVER" << endl;
    }
    
    return 0;
}
