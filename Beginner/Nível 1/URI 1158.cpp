//
//  URI 1158.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int X, Y, N, cont = 0, soma = 0;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> X >> Y;
        
        if(X % 2 == 0){
            X++;
        }
        
        while(cont < Y){
            soma += X;
            X += 2;
            cont++;
        }
        
        cout << soma << endl;
        
        soma = 0;
        cont = 0;
    }
    
    return 0;
}
