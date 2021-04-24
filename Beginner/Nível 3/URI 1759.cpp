//
//  URI 1759.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        if(i == N - 1){
            cout << "Ho!" << endl;
        }
        else{
            cout << "Ho ";
        }
    }
    return 0;
}
