//
//  URI 2774.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 15/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main (int argc, char* argv[]) {
    int H = 0, M = 0, QT = 0;
    double mediaX = 0, precisaoSensor = 0;
    vector<double> X;
    
    while (cin >> H >> M) {
        QT = (H * 60) / M;
        mediaX = 0;
        precisaoSensor = 0;
        X.clear();
        X.reserve(QT);
        X.resize(QT, 0.0);
        
        for (int i = 0; i < QT; i++) {
            cin >> X[i];
            
            mediaX += X[i];
        }
        
        mediaX = mediaX / double(QT);
        
        for (int i = 0; i < QT; i++) {
            precisaoSensor += pow((X[i] - mediaX), 2);
        }
        
        precisaoSensor = precisaoSensor / double(QT - 1.0);
        precisaoSensor = sqrt(precisaoSensor);
        
        cout << fixed << setprecision(5) << precisaoSensor << endl;
    }
    
    return 0;
}
