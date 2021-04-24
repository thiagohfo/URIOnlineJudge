//
//  URI 1043.cpp
//  Pratica
//
//  Created by Thiago Henrique on 12/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, perimetro, area;
    
    cout << fixed;
    cout.precision(1);
    
    cin >> a >> b >> c;
    
    if(a < b + c && b < a + c && c < b + a)
    {
        perimetro = a+b+c;
        
        cout << "Perimetro = " << perimetro << endl;
    }
    else
    {
        area = ((a + b) * c) / 2;
        
        cout << "Area = " << area << endl;
    }
    
    return 0;
}
