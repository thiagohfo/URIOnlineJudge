//
//  URI 1005.cpp
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
    double A, B, MEDIA;

    cin >> fixed >> setprecision(1);
    cin >> A >> B;

    MEDIA=((A*3.5)+(B*7.5))/11;

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}

