//
//  URI 1049.cpp
//  Pratica
//
//  Created by Thiago Henrique on 13/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    string palavra1, palavra2, palavra3;
    
    cin >> palavra1;
    cin >> palavra2;
    cin >> palavra3;
    
    if(palavra1 == "vertebrado"){
        if(palavra2 == "ave"){
            if(palavra3 == "carnivoro"){
                cout << "aguia" << endl;
            }
            else{
                cout << "pomba" << endl;
            }
        }
        else{
            if(palavra3 == "onivoro"){
                cout << "homem" << endl;
            }
            else{
                cout << "vaca" << endl;
            }
        }
    }
    else{
        if(palavra2 == "inseto"){
            if(palavra3 == "hematofago"){
                cout << "pulga" << endl;
            }
            else{
                cout << "lagarta" << endl;
            }
        }
        else{
            if(palavra3 == "hematofago"){
                cout << "sanguessuga" << endl;
            }
            else{
                cout << "minhoca" << endl;
            }
        }
    }
    
    return 0;
}
