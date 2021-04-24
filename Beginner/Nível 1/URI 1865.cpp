//
//  URI 1865.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, forca;
    string nome;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> nome >> forca;
        
        if(nome == "Thor"){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    
    return 0;
}
