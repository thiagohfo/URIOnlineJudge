//
//  URI 2718.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int decimalToBinary (long long int t_num, vector<int> &t_representacao) {
    bool continuar = true;
    int cont = 0;
    
    while (continuar) {
        t_representacao[cont] = (t_num % 2);
        t_num /= 2;
        
        if (t_num == 0 || t_num == 1) {
            continuar = false;
            t_representacao[++cont] = int(t_num);
        }
        
        cont++;
    }
    
    return cont;
}

int main (int argc, char* argv[]) {
    int N = 0, tam = 0, maior = 0, contUns = 0;
    long long int X = 0;
    vector<int> representacao(50, 0);
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> X;
        
        fill(representacao.begin(), representacao.end(), 0);
        maior = 0;
        contUns = 0;
        
        tam = decimalToBinary(X, representacao);
        
        for (int j = 0; j < tam; j++) {
            if (representacao[j] == 1) {
                contUns++;
            }
            
            if (contUns > maior) {
                maior = contUns;
            }
            
            if (representacao[j] == 0) {
                contUns = 0;
            }
        
        }
        
        cout << maior << endl;
    }
    
    return 0;
}
*/
//Alternativa com bitset, mais elegante

#include <stdio.h>
#include <iostream>
#include <bitset>
#include <algorithm>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, maior = 0, contUns = 0;
    long long int X = 0;
    bitset<50> representacao;

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> X;
        
        representacao = X;
        maior = 0;
        contUns = 0;
        
        for (int j = 0; j < representacao.size(); j++) {
            if (representacao[j] == 1) {
                contUns++;
            }
            
            if (contUns > maior) {
                maior = contUns;
            }
            
            if (representacao[j] == 0) {
                contUns = 0;
            }
        
        }
        
        cout << maior << endl;
    }
    
    return 0;
}
