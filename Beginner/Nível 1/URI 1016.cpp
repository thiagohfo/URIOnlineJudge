//
//  URI 1016.cpp
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
    int dist, tempo_dist;

    cin >> dist;

    tempo_dist = (60 * dist) / 30;

    cout << tempo_dist << " minutos" << endl;

    return 0;
}

