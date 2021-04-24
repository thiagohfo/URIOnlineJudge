//
//  URI 1014.cpp
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
    int kms;
    double comb;

    cin >> kms >> comb;

    cout << fixed << setprecision(3);
    cout << kms/comb << " km/l" << endl;

    return 0;
}
