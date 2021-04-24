//
//  URI 1924.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    string cursos[N];
    
    for(int i = 0; i < N; i++){
        cin.ignore();
        getline(cin, cursos[i]);
    }
    
    cout << "Ciencia da Computacao" << endl;
    
    return 0;
}
