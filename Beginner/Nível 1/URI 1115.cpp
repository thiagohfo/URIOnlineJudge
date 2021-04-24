//
//  URI 1115.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int X, Y;
    
    while(cin >> X >> Y){
        if(X > 0 && Y > 0){
            cout << "primeiro" << endl;
        }
        else if(X > 0 && Y < 0){
            cout << "quarto" << endl;
        }
        else if(X < 0 && Y > 0){
            cout << "segundo" << endl;
        }
        else if(X < 0 && Y < 0){
            cout << "terceiro" << endl;
        }
        else if(X == 0 || Y == 0){
            return 0;
        }
    }
    
    return 0;
}
