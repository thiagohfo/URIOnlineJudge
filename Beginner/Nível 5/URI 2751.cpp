//
//  URI 2751.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 21/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

void tracos () {
    for (int i = 0; i < 13; i++) {
        cout << "-";
    }
    
    cout << endl;
}

int main (int argc, char* argv[]) {
    int a, b;
    double c, d;
    
    a = 15;
    b = a / 2;
    c = 15.456;
    d = c / 7.0;
    
    cout << "Valores de b:" << endl;
    tracos();
    cout << "1) b = " << b << endl;
    cout << "2) b = " << setfill(' ') << setw(20) << right << b << endl;
    cout << "3) b = " << setfill('0') << setw(20) << b << endl;
    cout << "4) b = " << setfill(' ') << setw(20) << left << b << endl;
    cout << "5) b = " << b << "%" << endl;
    cout << endl;
    cout << "Valores de d:" << endl;
    tracos();
    cout << "1) d = " << fixed << setprecision(6) << d << endl;
    cout << "2) d = " << fixed << setprecision(0) << d << endl;
    cout << "3) d = " << fixed << setprecision(1) << d << endl;
    cout << "4) d = " << fixed << setprecision(2) << d << endl;
    cout << "5) d = " << fixed << setprecision(3) << d << endl;
    cout << "6) d = " << setfill(' ') << setw(20) << right << d << endl;
    cout << "7) d = " << setfill('0') << setw(20) << fixed << setprecision(3) << right << d << endl;
    cout << "8) d = " << setfill(' ') << setw(20) << left << d << endl;
    cout << "9) d = " << fixed << setprecision(2) << d << "%" << endl;
    
    return 0;
}
