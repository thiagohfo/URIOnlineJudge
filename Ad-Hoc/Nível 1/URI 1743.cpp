//
//  URI 1743.cpp
//  Pratica
//
//  Created by Thiago Henrique on 21/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int conector[2][5], cont = 0;
    
    cin >> conector[0][0] >> conector[0][1] >> conector[0][2] >> conector[0][3] >> conector[0][4];
    cin >> conector[1][0] >> conector[1][1] >> conector[1][2] >> conector[1][3] >> conector[1][4];
    
    for(int i = 0; i < 5; i++){
        if(conector[0][i] == 1 && conector[1][i] == 1){
            cont++;
        }
        else if(conector[0][i] == 0 && conector[1][i] == 0){
            cont++;
        }
    }
    
    if(cont == 0){
        cout << "Y" << endl;
    }
    else{
        cout << "N" << endl;
    }
    
    return 0;
}
