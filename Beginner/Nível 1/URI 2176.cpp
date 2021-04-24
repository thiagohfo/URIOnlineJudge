//
//  URI 2176.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string mensagem_s;
    int contador_bits = 0;
    
    cin >> mensagem_s;
    
    for(int i = 0; i < mensagem_s.size(); i++){
        if(mensagem_s[i] == '1'){
            contador_bits++;
        }
    }
    
    if(contador_bits % 2 == 0 || contador_bits == 0){
        mensagem_s += '0';
    }
    else{
        mensagem_s += '1';
    }
    
    cout << mensagem_s << endl;
    
    return 0;
}
