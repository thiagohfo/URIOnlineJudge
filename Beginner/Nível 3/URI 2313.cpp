//
//  URI 2313.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

bool retangulo(int a, int b, int c){
    bool valido = false;
    
    if(((a * a) == ((b * b) + (c * c))) || ((b * b) == ((c * c) + (a * a))) || ((c * c) == ((b * b) + (a * a)))){
        valido = true;
    }
    
    return valido;
}

int main(){
    int A, B, C;
    
    cin >> A >> B >> C;
    
    if((abs(B - C) < A && A < B + C) && (abs(A - C) < B && B < A + C) && (abs(A - B) < C && C < A + B)){
        if(A == B && B == C){
            cout << "Valido-Equilatero" << endl;
        } else if((A == B && A != C) || (C == B && C != A) || (A == C && A != B)){
            cout << "Valido-Isoceles" << endl;
        } else {
            cout << "Valido-Escaleno" << endl;
        }
        
        if(retangulo(A, B, C)){
            cout << "Retangulo: S" << endl;
        } else{
            cout << "Retangulo: N" << endl;
        }
    } else{
        cout << "Invalido" << endl;
    }
    
    return 0;
}
