//
//  URI 1847.cpp
//  Pratica
//
//  Created by Thiago Henrique on 23/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A, B, C, diferenca1, diferenca2;
    
    cin >> A >> B >> C;
    
    diferenca1 = B - A;
    diferenca2 = C - B;
    
    if(diferenca1 > diferenca2){
        cout << ":(" << endl;
    }
    else if(diferenca2 > diferenca1){
        cout << ":)" << endl;
    }
    else if(diferenca1 == diferenca2 && diferenca2 > 0){
        cout << ":)" << endl;
    }
    else{
        cout << ":(" << endl;
    }
    
    return 0;
}
