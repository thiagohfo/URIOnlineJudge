//
//  URI 1177.cpp
//  Pratica
//
//  Created by Thiago Henrique on 17/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int vetor[1000], T, j = 0;
    
    cin >> T;
    
    for(int i = 0; i < 1000; i++) {
        vetor[i] = j;
        
        cout << "N[" << i << "] = " << vetor[j] << endl;
        
        j++;
        
        if(j == T){
            j = 0;
        }
    }
    
    return 0;
}
