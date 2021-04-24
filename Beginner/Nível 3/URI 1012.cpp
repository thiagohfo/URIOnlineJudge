//
//  URI 1012.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

double triangulo(double &A, double &C);
double circulo(double &C);
double trapezio(double &A, double &B, double &C);
double quadrado(double &B);
double retangulo(double &A, double &B);

int main()
{
    double A, B, C;

    cin >> fixed >> setprecision(1);
    cin >> A >> B >> C;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangulo(A, C) << endl;
    cout << "CIRCULO: " << circulo(C) << endl;
    cout << "TRAPEZIO: " << trapezio(A, B, C) << endl;
    cout << "QUADRADO: " << quadrado(B) << endl;
    cout << "RETANGULO: " << retangulo(A, B) << endl;

    return 0;
}

double triangulo(double &A, double &C)
{
    return (A*C)/2;
}

double circulo(double &C)
{
    double pi=3.14159;
    return pi * (C*C);
}

double trapezio(double &A, double &B, double &C)
{
    return ((B+A)*C)/2;
}

double quadrado(double &B)
{
    return B*B;
}

double retangulo(double &A, double &B)
{
    return A*B;
}
