//
//  URI 2310.cpp
//  Pratica
//
//  Created by Thiago Henrique on 19/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int saques, bloqueio, ataques, t_saques = 0, t_bloqueio = 0, t_ataques = 0,
    t_saques2 = 0, t_bloqueio2 = 0, t_ataques2 = 0, qtd_jogadores;
    double porcentagem_saques, porcentagem_bloqueio, porcentagem_ataques;
    string nome;
    
    cin >> qtd_jogadores;
    
    for(int i = 0; i < qtd_jogadores; i++){
        cin >> nome;
        cin >> saques >> bloqueio >> ataques;
        
        t_saques += saques;
        t_bloqueio += bloqueio;
        t_ataques += ataques;
        
        cin >> saques >> bloqueio >> ataques;
        
        t_saques2 += saques;
        t_bloqueio2 += bloqueio;
        t_ataques2 += ataques;
    }
    
    porcentagem_saques = (double(t_saques2) * double(100)) / double(t_saques);
    porcentagem_bloqueio = (double(t_bloqueio2) * double(100)) / double(t_bloqueio);
    porcentagem_ataques = (double(t_ataques2) * double(100)) / double(t_ataques);
    
    cout << fixed;
    cout.precision(2);
    cout << "Pontos de Saque: " << porcentagem_saques << " %." << endl;
    cout << "Pontos de Bloqueio: " << porcentagem_bloqueio << " %." << endl;
    cout << "Pontos de Ataque: " << porcentagem_ataques << " %." << endl;
    
    return 0;
}
