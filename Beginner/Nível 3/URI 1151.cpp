//
//  URI 1151.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int N, ant1 = 1, ant2 = 0, atual;
    stringstream saida;
    string exibir;
    
    cin >> N;
    
    if(N < 3){
        cout << ant2 << " " << ant1 << endl;
        
        return 0;
    }
    else{
        saida << ant2 << " " << ant1 << " ";
    }
    
    for(int i = 2; i < N; i++) {
        atual = ant2 + ant1;
        ant2 = ant1;
        ant1 = atual;
        saida << atual << " ";
    }
    
    exibir = saida.str();
    exibir.pop_back();
    
    cout << exibir << endl;
    
    return 0;
}
