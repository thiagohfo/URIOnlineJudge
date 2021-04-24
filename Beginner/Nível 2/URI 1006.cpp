//
//  URI 1006.cpp
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
    double A, B, C, MEDIA;

    cin >> fixed >> setprecision(1);
    cin >> A >> B >> C;

    MEDIA=((A*2)+(B*3)+(C*5))/10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}
