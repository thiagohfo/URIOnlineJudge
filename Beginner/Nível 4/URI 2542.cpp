//
//  URI 2542.cpp
//  Pratica
//
//  Created by Thiago Henrique on 10/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    int n_atributos = 0, n_cartas1 = 0, n_cartas2 = 0, atributo_sorteado = 0;
    int marcos_escolha = 0, leonardo_escolha = 0;
    
    while (cin >> n_atributos) {
        cin >> n_cartas1 >> n_cartas2;
        
        int cartas_marcos[n_cartas1][n_atributos];
        int cartas_leonardo[n_cartas2][n_atributos];
        
        for (int i = 0; i < n_cartas1; i++) {
            for (int j = 0; j < n_atributos; j++) {
                cin >> cartas_marcos[i][j];
            }
        }
        
        for (int i = 0; i < n_cartas2; i++) {
            for (int j = 0; j < n_atributos; j++) {
                cin >> cartas_leonardo[i][j];
            }
        }
        
        cin >> marcos_escolha >> leonardo_escolha;
        
        cin >> atributo_sorteado;
        
        if (cartas_marcos[marcos_escolha - 1][atributo_sorteado - 1] > cartas_leonardo[leonardo_escolha - 1][atributo_sorteado - 1]) {
            cout << "Marcos" << endl;
        } else if (cartas_marcos[marcos_escolha - 1][atributo_sorteado - 1] < cartas_leonardo[leonardo_escolha - 1][atributo_sorteado - 1]) {
            cout << "Leonardo" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }
    
    return 0;
}
