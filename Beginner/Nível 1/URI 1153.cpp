//
//  URI 1153.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int fatorial(int numero){
    if(numero == 1){
        return 1;
    }
    else{
        return numero * fatorial(numero - 1);
    }
}

int main(){
    int N;
    
    cin >> N;

    cout << fatorial(N) << endl;
    
    return 0;
}
