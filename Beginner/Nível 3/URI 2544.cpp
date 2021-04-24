//
//  URI 2544.cpp
//  Pratica
//
//  Created by Thiago Henrique on 06/12/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    long long int N;
    int cont = 0;
    
    while(cin >> N){
        if(N == 1){
            cout << "0" << endl;
        } else {
            while(N != 1){
                N /= 2;
                cont++;
            }
            
            cout << cont << endl;
            
            cont = 0;
        }
    }
    
    return 0;
}
