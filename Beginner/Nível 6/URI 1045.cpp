//
//  URI 1045.cpp
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
    double A, B, C, TEMP;
    
    cin >> A >> B >> C;
    
    if(B > A)
    {
        TEMP = A;
        A = B;
        B = TEMP;
    }
    
    if(C > A)
    {
        TEMP = A;
        A = C;
        C = TEMP;
    }
    
    if(C > B)
    {
        TEMP = B;
        B = C;
        C = TEMP;
    }
    
    if(A >= B + C)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if(A * A == (B * B) + (C * C))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if(A * A > (B * B) + (C * C))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(A * A < (B * B) + (C * C))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    
    if(A == B && B == C)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    
    else if(A == B || B == C || A == C)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    
    return 0;
}
