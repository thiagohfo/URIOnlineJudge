//
//  URI 2551.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/12/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, T, D;
    float recorde = 0, temp = 0;
    
    while(cin >> N){
        for(int i = 0; i < N; i++){
            cin >> T >> D;
            
            temp = float(D) / float(T);
            
            if(temp > recorde){
                cout << i + 1 << endl;
                
                recorde = temp;
            }
        }
        
        recorde = 0;
        temp = 0;
    }
    
    return 0;
}
