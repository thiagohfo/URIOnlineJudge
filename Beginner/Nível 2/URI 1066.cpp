//
//  URI 1066.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
    int contpar = 0, contposi = 0, contimpar = 0;
    int contnega = 0, numero;
    
    for(int i = 0; i < 5; i++) {
        cin >> numero;
        
        if(numero % 2 == 0) {
            contpar++;
            
            if(numero > 0) {
                contposi++;
            } else if(numero < 0) {
                contnega++;
            }
        } else {
            contimpar++;
            
            if(numero > 0) {
                contposi++;
            } else if(numero < 0) {
                contnega++;
            }
        }
    }
    
    cout << contpar << " valor(es) par(es)" << endl;
    cout << contimpar << " valor(es) impar(es)" << endl;
    cout << contposi << " valor(es) positivo(s)" << endl;
    cout << contnega << " valor(es) negativo(s)" << endl;
 
    return 0;
}
