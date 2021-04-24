//
//  URI 2203.cpp
//  Pratica
//
//  Created by Thiago Henrique on 18/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x_jogador, y_jogador, x_invasor, y_invasor, velocidade_invasor, raio_ultimate, raio_corvos, alcance_ultimate;
    double distancia, pontos_x, pontos_y;
    
    while(cin >> x_jogador >> y_jogador >> x_invasor >> y_invasor >> velocidade_invasor >> raio_ultimate >> raio_corvos){
        pontos_x = double(x_invasor - x_jogador);
        pontos_x = pow(pontos_x, 2);
        pontos_y = double(y_invasor - y_jogador);
        pontos_y = pow(pontos_y, 2);
        distancia = sqrt(pontos_x + pontos_y);
        
        distancia += double(velocidade_invasor) * 1.5;
        
        alcance_ultimate = raio_ultimate + raio_corvos;
        
        if(distancia <= alcance_ultimate){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    
    return 0;
}
