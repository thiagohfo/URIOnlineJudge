//
//  URI 1589.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int R1, R2, N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> R1 >> R2;
        
        cout << R1 + R2 << endl;
    }
    
    return 0;
}
