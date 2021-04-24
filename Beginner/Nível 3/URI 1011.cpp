//
//  URI 1011.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 16/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int raio;
    double pi=3.14159, volume;

    cin >> raio;

    volume=((pow(raio, 3)*pi)*4)/3;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;

    return 0;
}

