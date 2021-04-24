//
//  URI 1037.cpp
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

  float numero;
  
  cin >> numero;
  
  if(numero >= 0 && numero <= 25.0) {
    cout << "Intervalo [0,25]" << endl;
  }
  else if(numero > 25.0 && numero <= 50.0) {
    cout << "Intervalo (25,50]" << endl;
  }
  else if(numero > 50.0 && numero <= 75.0) {
    cout << "Intervalo (50,75]" << endl;
  }
  else if(numero > 75.0 && numero <= 100.0) {
    cout << "Intervalo (75,100]" << endl;
  }
  else {
    cout << "Fora de intervalo" << endl;
  }
  
  return 0;
    
}
