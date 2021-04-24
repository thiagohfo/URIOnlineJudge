//
//  URI 2702.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 06/01/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    int frango = 0, bife = 0, massa = 0, pfrango = 0, pbife = 0, pmassa = 0, total = 0;
    
    cin >> frango >> bife >> massa;
    cin >> pfrango >> pbife >> pmassa;
    
    if (frango < pfrango) {
        total += abs(frango - pfrango);
    }
    
    if (bife < pbife) {
        total += abs(bife - pbife);
    }
    
    if (massa < pmassa) {
        total += abs(massa - pmassa);
    }
    
    cout << total << endl;
    
    return 0;
}
