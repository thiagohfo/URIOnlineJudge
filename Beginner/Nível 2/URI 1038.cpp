//
//  URI 1038.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int qtd, pedido;
  float valor;
  
  cin >> pedido >> qtd;
  
  switch(pedido){
    case 1:
          valor = qtd * 4.0;
          break;
    case 2:
        valor = qtd * 4.5;
        break;
    case 3:
        valor = qtd * 5.0;
        break;
    case 4:
        valor = qtd * 2.0;
        break;
    case 5:
        valor = qtd * 1.5;
        break;
  }
  
  cout << fixed << setprecision(2) << "Total: R$ " << valor << endl;
  
  return 0;
    
}
