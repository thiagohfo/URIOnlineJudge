//
//  URI 1564.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N;
    
    while(cin >> N){
        if(N == 0){
            cout << "vai ter copa!" << endl;
        }
        else if(N > 0){
            cout << "vai ter duas!" << endl;
        }
    }
    
    return 0;
}
