//
//  URI 2334.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 22/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string entrada;
    stringstream resultado_temp;
    bool diminuiu = false;
    
    while(cin >> entrada){
        if(entrada == "-1"){
            break;
        }
        
        for(int i = entrada.size() - 1; i >= 0; i--){
            if(entrada[i] != '0' && diminuiu == false){
                int temp;
                
                temp = entrada[i] - '0';
                temp -= 1;
                entrada[i] = temp + '0';
                diminuiu = true;
            }
            else if(entrada[i] == '0' && diminuiu == false && entrada.size() > 1){
                entrada[i] = '9';
            }
            else{
                continue;
            }
        }
        
        if(entrada[0] == '0' && entrada.size() > 1){
            resultado_temp.str("");
            
            for(int i = 1; i < entrada.size(); i++){
                resultado_temp << entrada[i];
            }
            
            entrada.clear();
            entrada = resultado_temp.str();
        }
        
        cout << entrada << endl;
        
        diminuiu = false;
    }
    
    return 0;
}
