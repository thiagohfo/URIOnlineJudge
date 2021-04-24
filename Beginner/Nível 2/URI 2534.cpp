//
//  URI 2534.cpp
//  Pratica
//
//  Created by Thiago Henrique on 30/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, Q, temp;
    
    while(cin >> N >> Q){
        int notas[N];
        
        for(int i = 0; i < N; i++){
            cin >> notas[i];
        }
        
        sort(notas, notas + N, greater<int>());
        
        for(int i = 0; i < Q; i++){
            cin >> temp;
            
            cout << notas[temp - 1] << endl;
        }
        
    }
    
    return 0;
}
