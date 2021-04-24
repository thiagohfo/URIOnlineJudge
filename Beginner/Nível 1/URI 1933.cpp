//
//  URI 1933.cpp
//  Pratica
//
//  Created by Thiago Henrique on 25/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int cartas[3], melhor_carta;
    
    cin >> cartas[0] >> cartas[1];
    
    if(cartas[0] == cartas[1]){
        melhor_carta = cartas[0];
    }
    else if(cartas[0] > cartas[1]){
        melhor_carta = cartas[0];
    }
    else{
        melhor_carta = cartas[1];
    }
    
    cout << melhor_carta << endl;
    
    return 0;
}
