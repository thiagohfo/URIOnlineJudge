//
//  URI 1002.cpp
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
    double area, pi=3.14159, raio;

    cin >> raio;

    area=pi*(raio*raio);

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}
