//
//  URI 2061.cpp
//  Pratica
//
//  Created by Thiago Henrique on 07/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int abas, acoes;
    string temp;
    
    cin >> abas >> acoes;
    
    for(int i = 0; i < acoes; i++){
        cin >> temp;
        
        if(temp == "fechou"){
            abas++;
        }
        else{
            abas--;
        }
    }
    
    cout << abas << endl;
    
    return 0;
}
