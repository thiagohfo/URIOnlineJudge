//
//  URI 1858.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, pos, numero_temp = 99;
    
    cin >> N;
    
    int T[N];
    
    for(int i = 0; i < N; i++){
        cin >> T[i];
        
        if(T[i] < numero_temp){
            numero_temp = T[i];
            pos = i + 1;
        }
    }
    
    cout << pos << endl;
    
    return 0;
}
