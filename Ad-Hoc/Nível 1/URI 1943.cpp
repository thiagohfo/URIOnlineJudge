//
//  URI 1943.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 29/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
    int N, tops[7] = {1, 3, 5, 10, 25, 50, 100}, cont = 0;
    
    cin >> N;
    
    while (tops[cont] <= N) {
        if (tops[cont] < N) {
            cont++;
        } else if (tops[cont] == N) {
            break;
        }
    }
    
    cout << "Top " << tops[cont] << endl;
    
    return 0;
}
