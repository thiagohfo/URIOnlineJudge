//
//  URI 1008.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numero, htrabalhada;
    double vhora, salario;

    cin >> numero >> htrabalhada;

    cin >> fixed >> setprecision(2);

    cin >> vhora;

    salario=htrabalhada*vhora;

    cout << "NUMBER = " << numero << endl;
    
    cout << fixed << setprecision(2);

    cout << "SALARY = U$ " << salario << endl;

    return 0;
}
