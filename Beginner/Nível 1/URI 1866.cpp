//
//  URI 1866.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, C;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> C;
        
        if(C % 2 == 0){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    
    return 0;
}
