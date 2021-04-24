//
//  URI 2160.cpp
//  Pratica
//
//  Created by Thiago Henrique on 13/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string texto;
    
    getline(cin, texto);
    
    if(texto.size() <= 80){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}
