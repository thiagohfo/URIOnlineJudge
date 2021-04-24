//
//  URI 2006.cpp
//  Pratica
//
//  Created by Thiago Henrique on 27/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, escolhas[5], cont = 0;
    
    cin >> N;
    
    for(int i = 0; i < 5; i++){
        cin >> escolhas[i];
        
        if(escolhas[i] == N){
            cont++;
        }
    }
    
    cout << cont << endl;
    
    return 0;
}
