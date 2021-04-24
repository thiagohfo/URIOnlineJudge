//
//  URI 1013.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n1, n2, n3, maior, maioraux;

    cin >> n1 >> n2 >> n3;

    maioraux = (n1 + n2 + abs(n1 - n2)) / 2;
    maior = (maioraux + n3 + abs(maioraux - n3)) / 2;

    cout << maior << " eh o maior" << endl;

    return 0;
}

