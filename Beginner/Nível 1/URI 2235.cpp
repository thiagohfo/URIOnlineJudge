//
//  URI 2235.cpp
//  Pratica
//
//  Created by Thiago Henrique on 19/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    
    cin >> A >> B >> C;
    
    if(A + B == C || B + C == A || C + A == B){
        cout << "S" << endl;
    }
    else if(A == B || A == C || B == C){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
    
    return 0;
}
