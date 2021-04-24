//
//  URI 1134.cpp
//  Pratica
//
//  Created by Thiago Henrique on 16/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int tipo_combustivel, alcoolT = 0, gasolinaT = 0, dieselT = 0;
    bool acabou = false;
    
    while(acabou != true){
        cin >> tipo_combustivel;
        
        switch (tipo_combustivel) {
            case 1:
                alcoolT++;
                break;
            case 2:
                gasolinaT++;
                break;
            case 3:
                dieselT++;
                break;
            case 4:
                cout << "MUITO OBRIGADO\n"
                    << "Alcool: " << alcoolT
                    << "\nGasolina: " << gasolinaT
                    << "\nDiesel: " << dieselT << endl;
                
                acabou = true;
                break;
        }
    }
    
    return 0;
}
