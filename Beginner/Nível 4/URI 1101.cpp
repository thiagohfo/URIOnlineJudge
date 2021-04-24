//
//  URI 1101.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int min, max, temp, soma = 0;
    
    while(cin >> min >> max){
        if(min <= 0 || max <= 0){
            return 0;
        }
        else if(min >= max){
            temp = max;
            max = min;
            min = temp;
        }
        
        for(int j = min; j <= max; j++){
            cout << j << " ";
            soma += j;
        }
        
        cout << "Sum=" << soma << endl;
        
        soma = 0;
    }
    
    return 0;
}
