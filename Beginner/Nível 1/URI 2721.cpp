//
//  URI 2721.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int A = 0, cont = 0, cont2 = 0;
    
    for (int i = 0; i < 9; i++) {
        cin >> A;
        
        cont += A;
    }
    
    for (int i = 0; i < cont; i++) {
        cont2++;
        
        if (cont2 == 10) {
            cont2 = 1;
        }
    }
    
    switch (cont2) {
        case 1:
            cout << "Dasher" << endl;
            break;
        case 2:
            cout << "Dancer" << endl;
            break;
        case 3:
            cout << "Prancer" << endl;
            break;
        case 4:
            cout << "Vixen" << endl;
            break;
        case 5:
            cout << "Comet" << endl;
            break;
        case 6:
            cout << "Cupid" << endl;
            break;
        case 7:
            cout << "Donner" << endl;
            break;
        case 8:
            cout << "Blitzen" << endl;
            break;
        case 9:
            cout << "Rudolph" << endl;
            break;
        default:
            break;
    }
    
    return 0;
}
