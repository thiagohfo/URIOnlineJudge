//
//  URI 1010.cpp
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
    int A, qtdA, B, qtdB;
    double valorA, valorB, total;

    cin >> fixed >> setprecision(2);

    cin >> A >> qtdA >> valorA;

    cin >> B >> qtdB >> valorB;

    total=(qtdA*valorA)+(qtdB*valorB);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}

