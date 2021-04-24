//
//  URI 1157.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, cont = 1;
    
    cin >> N;
    
    while(cont <= N){
        if(N % cont == 0){
            cout << cont << endl;
        }
        
        cont++;
    }
    
    return 0;
}
