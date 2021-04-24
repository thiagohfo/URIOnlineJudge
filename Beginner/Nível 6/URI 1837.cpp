//
//  URI 1837.cpp
//  Pratica
//
//  Created by Thiago Henrique on 23/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A, B, Q, R, R_limite;
    
    cin >> A >> B;
    
    if(A % B < 0){
        R = 0;
        
        if(B < 0){
            R_limite = B * -1;
        }
        else{
            R_limite = B;
        }
        
        for(int i = 0; i < R_limite; i++){
            if(((A - R) % B) != 0){
                R++;
            }
        }
        
        Q = (A - R) / B;
    }
    else{
        Q = A / B;
        R = A % B;
    }
    
    cout << Q << " " << R << endl;
    
    return 0;
}
