//
//  URI 2766.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 06/01/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main () {
    string nomes[10];
    int casos = 10;
    
    for (int i = 0; i < casos; i++) {
        cin >> nomes[i];
    }
        
    cout << nomes[2] << endl;
    cout << nomes[6] << endl;
    cout << nomes[8] << endl;
    
    return 0;
}
