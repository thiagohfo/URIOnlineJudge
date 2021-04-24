//
//  URI 1098.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    float I = 0.0, J = 1.0, adicional = 0.0;
    bool primeira_soma = true;
    
    while(I <= 2){
        for(int k = 0; k < 3; k++){
            if(primeira_soma != true){
                J = (k + 1) + adicional;
                I = adicional;
                cout << "I=" << I << " J=" << J << endl;
            }
            else{
                J = k + 1;
                cout << "I=" << I << " J=" << J << endl;
            }
        }
        
        adicional += 0.2;
        primeira_soma = false;
    }
    
    return 0;
}
