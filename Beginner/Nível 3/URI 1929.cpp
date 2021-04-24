//
//  URI 1929.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int lados[4];
    bool condicao = false;
    
    cin >> lados[0] >> lados[1] >> lados[2] >> lados[3];
    
    for(int i = 0, j = 1; i < 4; i++, j++){
        if((abs(lados[(i + 1) % 4] - lados[(i + 2) % 4]) < lados[i]) && (lados[i] < lados[(i + 1) % 4] + lados[(i + 2) % 4])){
            condicao = true;
        }
        else if((abs(lados[(j + 1) % 4] - lados[(j + 2) % 4]) < lados[i]) && (lados[i] < lados[(j + 1) % 4] + lados[(j + 2) % 4])){
            condicao = true;
        }
    }
    
    if(condicao == true){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
    
    return 0;
}
