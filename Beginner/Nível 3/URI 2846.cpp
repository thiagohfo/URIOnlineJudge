//
//  URI 2846.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 02/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void fibonacci (int t_elemento, vector<int> &fibonot) {
    int t_num1 = 1, t_num2 = 1, t_cont = 0, temp = 0;
    
    while (t_cont < t_elemento) {
        if ((t_num2 - t_num1) > 1) {
            for (int i = t_num1 + 1; i < t_num2; i++) {
                fibonot[t_cont] = i;
                t_cont++;
                
                if (t_cont == t_elemento) {
                    break;
                }
            }
        }
        
        temp = t_num2;
        t_num2 = t_num1 + t_num2;
        t_num1 = temp;
    }
}

int main (int argc, char* argv[]) {
    int elemento;
    
    cin >> elemento;
    
    vector<int> fibonot(elemento, 0);
    
    fibonacci(elemento, fibonot);
    
    cout << fibonot[elemento - 1] << endl;
    
    return 0;
}
