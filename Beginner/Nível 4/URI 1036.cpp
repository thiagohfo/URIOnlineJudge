//
//  URI 1036.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

  double A, B, C, x1, x2, delta;
  
  cin >> A >> B >> C;
  
  delta = sqrt(pow(B, 2) - 4*A*C);
  x1 = ((B*(-1)) + delta)/(2*A);
  x2 = ((B*(-1)) - delta)/(2*A);
  
  if(delta > 0 && A > 0){
    cout << fixed << setprecision(5) << "R1 = " << x1 << endl << "R2 = " << x2 << endl;
  }
  else{
    cout << "Impossivel calcular" << endl;
  }
    
    return 0;
}
