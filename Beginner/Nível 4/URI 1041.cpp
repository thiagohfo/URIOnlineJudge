//
//  URI 1041.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float x = 0, y = 0;
    
    cin >> setprecision(1) >> x >> y;
    
    if(x == 0 && y != 0){
      cout << "Eixo Y" << endl;
    } else if(y == 0 && x != 0){
      cout << "Eixo X" << endl;
    } else if(x == 0 && y == 0){
      cout << "Origem" << endl;
    } else if(x > 0){
      if(y > 0){
        cout << "Q1" << endl;
      } else if(y < 0){
        cout << "Q4" << endl;
      }
    } else if(x < 0){
      if(y > 0){
        cout << "Q2" << endl;
      } else if(y < 0){
        cout << "Q3" << endl;
      }
    }
    
    return 0;
}
