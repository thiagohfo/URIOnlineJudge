//
//  URI 1009.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    char nome[20];
    double salario, totalvenda, valorcbonus;

    cin >> nome;

    cin >> fixed >> setprecision(2);

    cin >> salario >> totalvenda;

    valorcbonus=salario+(totalvenda*0.15);

    cout << fixed << setprecision(2);

    cout << "TOTAL = R$ " << valorcbonus << endl;
    
    return 0;
}

