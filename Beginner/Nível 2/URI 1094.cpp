//
//  URI 1094.cpp
//  Pratica
//
//  Created by Thiago Henrique on 15/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, cobaias, total_cobaias = 0, coelhos = 0, sapos = 0, ratos = 0;
    float p_coelhos, p_ratos, p_sapos;
    char tipo;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> cobaias >> tipo;
        
        total_cobaias += cobaias;
        
        switch(tipo){
            case 'R':
                ratos += cobaias;
                break;
            case 'S':
                sapos += cobaias;
                break;
            case 'C':
                coelhos += cobaias;
                break;
        }
    }
    
    p_coelhos = (float(coelhos) / float(total_cobaias)) * 100;
    p_sapos = (float(sapos) / float(total_cobaias)) * 100;
    p_ratos = (float(ratos) / float(total_cobaias)) * 100;
    
    cout << fixed;
    cout.precision(2);
    cout << "Total: " << total_cobaias << " cobaias\n"
        << "Total de coelhos: " << coelhos << "\n"
        << "Total de ratos: " << ratos << "\n"
        << "Total de sapos: " << sapos << "\n"
        << "Percentual de coelhos: " << p_coelhos << " %\n"
        << "Percentual de ratos: " << p_ratos << " %\n"
        << "Percentual de sapos: " << p_sapos << " %\n";
    
    return 0;
}
