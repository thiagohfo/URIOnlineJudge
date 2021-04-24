//
//  Lista de Treinamento.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 19/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main (int argc, char* argv[]) {
    long int C = 0;
    int temp = 0, comparecidos = 0;
    bitset<1000> compareceram;
    
    cin >> C;
    
    for (int i = 0; i < C; i++) {
        cin >> temp;
        compareceram[i] = temp;
    }
    
    comparecidos = int(compareceram.count());
    
    cout << comparecidos << endl;
    
    return 0;
}
