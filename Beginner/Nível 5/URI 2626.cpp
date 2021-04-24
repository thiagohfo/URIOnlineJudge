//
//  URI 2626.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int comparar (string t_jogA, string t_jogB) {
    int t_return = 10;
    
    if (t_jogA == t_jogB) {
        t_return = 0;
    } else if (t_jogA == "pedra") {
        if (t_jogB == "tesoura") {
            t_return = 1;
        } else if (t_jogB == "papel") {
            t_return = 2;
        }
    } else if (t_jogA == "papel") {
        if (t_jogB == "tesoura") {
            t_return = 2;
        } else if (t_jogB == "pedra") {
            t_return = 1;
        }
    } else if (t_jogA == "tesoura") {
        if (t_jogB == "pedra") {
            t_return = 2;
        } else if (t_jogB == "papel") {
            t_return = 1;
        }
    }
    
    return t_return;
}

int main (int argc, char* argv[]) {
    vector<string> jogadas(3);
    vector<int> pontos(3, 0);
    int ponto = 0;
    
    while (cin >> jogadas[0] >> jogadas[1] >> jogadas[2]) {
        for (int i = 0; i < 3; i++) {
            pontos[i] = 0;
        }
        
        ponto = 0;
        
        ponto = comparar(jogadas[0], jogadas[1]);
        
        if (ponto == 1) {
            pontos[0]++;
        } else if (ponto == 2) {
            pontos[1]++;
        }
        
        ponto = comparar(jogadas[0], jogadas[2]);
        
        if (ponto == 1) {
            pontos[0]++;
        } else if (ponto == 2) {
            pontos[2]++;
        }
        
        ponto = comparar(jogadas[1], jogadas[2]);
        
        if (ponto == 1) {
            pontos[1]++;
        } else if (ponto == 2) {
            pontos[2]++;
        }
        
        if (pontos[0] > pontos[1] && pontos[0] > pontos[2]) {
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        } else if (pontos[1] > pontos[0] && pontos[1] > pontos[2]) {
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        } else if (pontos[2] > pontos[1] && pontos[2] > pontos[0]) {
            cout << "Urano perdeu algo muito precioso..." << endl;
        } else {
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
    }
    
    return 0;
}
