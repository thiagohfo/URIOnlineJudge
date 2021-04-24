//
//  URI 1018.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n, temp = 0, c1 =0, c2 = 0, c5 = 0, c10 = 0, c20 = 0, c50 = 0, c100 = 0;

    cin >> n;

    if (n > 100) {
        c100 = n / 100;
        temp = n % 100;
    }

    if (temp >= 50) {
        c50 = 1;
        temp = temp % 50;
    }

    if (temp >= 40) {
        c20 = 2;
        temp = temp % 20;
    }

    if (temp >= 20) {
        c20 = 1;
        temp = temp % 20;
    }

    if (temp >= 10) {
        c10 = 1;
        temp = temp % 10;
    }

    if (temp >= 5) {
        c5 = 1;
        temp = temp % 5;
    }

    if (temp >= 4) {
        c2 = 2;
        temp = temp % 2;
    }

    if (temp >= 2) {
        c2 = 1;
        temp = temp % 2;
    }

    if (temp >= 1) {
        c1 = 1;
        temp = temp % 1;
    }

    cout << n << endl;
    cout << c100 << " nota(s) de R$ 100,00" << endl;
    cout << c50 << " nota(s) de R$ 50,00" << endl;
    cout << c20 << " nota(s) de R$ 20,00" << endl;
    cout << c10 << " nota(s) de R$ 10,00" << endl;
    cout << c5 << " nota(s) de R$ 5,00" << endl;
    cout << c2 << " nota(s) de R$ 2,00" << endl;
    cout << c1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
