//
//  URI 1075.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, temp;
    
    cin >> N;
    
    for(int i = 0; i < 10000; i++){
        temp = i % N;
        if(temp == 2){
            cout << i << endl;
        }
    }
    
    return 0;
}
