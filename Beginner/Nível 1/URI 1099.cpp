//
//  URI 1099.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, min, max, temp, soma = 0;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> min >> max;
        
        if(min >= max){
            temp = max;
            max = min;
            min = temp;
        }
        
        for(int j = min + 1; j < max; j++){
            if(j % 2 != 0){
                soma += j;
            }
        }
        
        cout << soma << endl;
        
        soma = 0;
    }
    
    return 0;
}
