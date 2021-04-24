//
//  URI 1015.cpp
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
    int x1, x2, y1, y2;
    double dist;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    dist = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    cout << fixed << setprecision(4);
    cout << dist << endl;

    return 0;
}
