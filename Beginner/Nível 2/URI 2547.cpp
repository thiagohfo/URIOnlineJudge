//
//  URI 2547.cpp
//  Pratica
//
//  Created by Thiago Henrique on 10/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int n = 0, a_min = 0, a_max = 0, altura, cont = 0;
    
    while (cin >> n >> a_min >> a_max) {
        cont = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> altura;
            
            if (altura >= a_min && altura <= a_max) {
                cont++;
            }
        }
        
        cout << cont << endl;
    }
    
    return 0;
}
