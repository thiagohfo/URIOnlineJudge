//
//  URI 1097.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int I = 0, J = 1, cont = 0;
    bool acabou = false;
    
    while(acabou != true){
        cout << "I=" << I << " J=" << J << endl;
        
        J--;
        cont++;
        
        if(cont == 3){
            I += 2;
            J += 5;
            cont = 0;
            
            if(I == 11 && J == 17){
                acabou = true;
            }
        }
    }
    
    return 0;
}
