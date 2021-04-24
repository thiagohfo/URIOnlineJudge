//
//  URI 2315.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    std::ios::sync_with_stdio(false);
    
    int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    unsigned int dia1 = 0, dia2 = 0, mes1 = 0, mes2 = 0, diferenca = 0;
    
    cin >> dia1 >> mes1;
    cin >> dia2 >> mes2;
    
    for (int i = (mes1 - 1); i < (mes2 - 1); i++) {
        diferenca += meses[i];
    }
    
    diferenca += dia2;
    diferenca -= dia1;
    
    cout << diferenca << endl;
    
    return 0;
}
