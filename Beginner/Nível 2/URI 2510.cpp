//
//  URI 2510.cpp
//  Pratica
//
//  Created by Thiago Henrique on 28/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string vilao;
    int T;
    
    cin >> T;
    cin.ignore();
    
    for(int i = 0; i < T; i++){
        getline(cin, vilao);
        
        transform(vilao.begin(), vilao.end(), vilao.begin(), ::tolower);
        
        if(vilao == "Batmain" || vilao == "batmain"){
            cout << "N" << endl;
        } else{
            cout << "Y" << endl;
        }
    }
    
    return 0;
}
