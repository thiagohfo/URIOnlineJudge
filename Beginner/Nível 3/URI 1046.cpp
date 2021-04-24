//
//  URI 1046.cpp
//  Pratica
//
//  Created by Thiago Henrique on 12/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int HORA_I, HORA_F, TEMPO_TOTAL = 0;
    
    cin >> HORA_I >> HORA_F;
    
    if(HORA_I >= HORA_F)
    {
        TEMPO_TOTAL += 24 - HORA_I;
        TEMPO_TOTAL += HORA_F;
        
        cout << "O JOGO DUROU " << TEMPO_TOTAL << " HORA(S)" << endl;
    }
    else
    {
        TEMPO_TOTAL = HORA_F - HORA_I;
        
        cout << "O JOGO DUROU " << TEMPO_TOTAL << " HORA(S)" << endl;
    }
    
    return 0;
}
