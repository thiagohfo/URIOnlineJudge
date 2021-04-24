//
//  URI 1546.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 15/01/20.
//  Copyright © 2020 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int N = 0, K = 0, temp = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> K;
        
        for (int j = 0; j < K; j++) {
            cin >> temp;
            
            switch (temp) {
                case 1:
                    cout << "Rolien" << endl;
                    break;
                case 2:
                    cout << "Naej" << endl;
                    break;
                case 3:
                    cout << "Elehcim" << endl;
                    break;
                case 4:
                    cout << "Odranoel" << endl;
                    break;
                default:
                    break;
            }
        }
    }
    
    return 0;
}
