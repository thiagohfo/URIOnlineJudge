//
//  URI 2754.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 06/01/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    
    double v1 = 234.345, v2 = 45.698;
    
    cout << fixed << setprecision(6) << v1 << " - " << v2 << endl;
    cout << fixed << setprecision(0) << v1 << " - " << v2 << endl;
    cout << fixed << setprecision(1) << v1 << " - " << v2 << endl;
    cout << fixed << setprecision(2) << v1 << " - " << v2 << endl;
    cout << fixed << setprecision(3) << v1 << " - " << v2 << endl;
    cout << fixed << scientific << setprecision(6) << v1 << " - " << v2 << endl;
    cout << fixed << uppercase << scientific << setprecision(6) << v1 << " - " << v2 << endl;
    cout << defaultfloat;
    cout << v1 << " - " << v2 << endl;
    cout << v1 << " - " << v2 << endl;
    
    return 0;
}
