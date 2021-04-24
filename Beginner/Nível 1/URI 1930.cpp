//
//  URI 1930.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int tomadas[4], total_aparelhos = 0;
    
    cin >> tomadas[0] >> tomadas[1] >> tomadas[2] >> tomadas[3];
    
    for(int i = 0; i < 4 - 1; i++){
        total_aparelhos += (tomadas[i] - 1);
    }
    
    total_aparelhos += tomadas[3];
    
    cout << total_aparelhos << endl;
    
    return 0;
}
