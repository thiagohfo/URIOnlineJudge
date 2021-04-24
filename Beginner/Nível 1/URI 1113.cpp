//
//  URI 1113.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int min, max;
    
    while(cin >> min >> max){
        if(min > max){
            cout << "Decrescente" << endl;
        }
        else if(min < max){
            cout << "Crescente" << endl;
        }
        else{
            return 0;
        }
    }
    
    return 0;
}
