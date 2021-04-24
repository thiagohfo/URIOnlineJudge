//
//  URI 1017.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int tempo, vel;
    const int comb = 12;
    double comb_gasto;

    cout.precision(3);

    cin >> tempo >> vel;

    comb_gasto = double(tempo * vel) / comb;

    cout << std::fixed << comb_gasto << endl;

    return 0;
}

