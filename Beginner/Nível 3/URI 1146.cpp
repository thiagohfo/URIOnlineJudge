//
//  URI 1146.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int X;

    while(cin >> X){
        if(X == 0){
            return 0;
        }
        
        for (int i = 1; i <= X; i++) {
            if(i < X){
                cout << i << " ";
            }
            else{
                cout << i << endl;
            }
        }
    }
    
    return 0;
}
