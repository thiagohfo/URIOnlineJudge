//
//  URI 2143.cpp
//  Pratica
//
//  Created by Thiago Henrique on 11/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int T, N;
    
    cin >> T;
    
    while(T != 0){
        for(int i = 0; i < T; i++){
            cin >> N;
            
            if((N - 1) % 2 == 0){
                cout << ((N - 1) * 2) + 1 << endl;
            }
            else{
                cout << ((N - 2) * 2) + 2 << endl;
            }
        }
        
        cin >> T;
    }
    
    return 0;
}
