//
//  URI 2502.cpp
//  Pratica
//
//  Created by Thiago Henrique on 27/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    char alfabeto[45] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', ',', ';', ':', ' ', '!', '?', '(', ')'};
    char letra_temp, letra_temp2, letra_atual;
    int C, N;
    string cifra1, cifra2;
    stringstream frase_final;
    
    while(cin >> C >> N){
        char alfabeto_trocado[45] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', ',', ';', ':', ' ', '!', '?', '(', ')'};
        string frases[N];
        
        cin.ignore();
        getline(cin, cifra1);
        getline(cin, cifra2);
        
        for(int i = 0; i < cifra2.size(); i++){
            letra_temp = tolower(cifra1[i], locale());
            letra_temp2 = tolower(cifra2[i], locale());
            
            for(int j = 0; j < 45; j++){
                if(letra_temp == alfabeto_trocado[j]){
                    alfabeto_trocado[j] = tolower(cifra2[i], locale());
                } else if(letra_temp2 == alfabeto_trocado[j]){
                    alfabeto_trocado[j] = tolower(cifra1[i], locale());
                }
            }
        }
        
        transform(cifra1.begin(), cifra1.end(), cifra1.begin(), ::tolower);
        transform(cifra2.begin(), cifra2.end(), cifra2.begin(), ::tolower);
        
        for(int k = 0; k < N; k++){
            getline(cin, frases[k]);
            
            for(int i = 0; i < frases[k].size(); i++){
                letra_atual = tolower(frases[k][i], locale());
                
                if(cifra2.find(letra_atual) != string::npos || cifra1.find(letra_atual) != string::npos){
                    for(int j = 0; j < 45; j++){
                        if(letra_atual == alfabeto_trocado[j]){
                            if(isupper(frases[k][i], locale())){
                                frase_final << toupper(alfabeto[j], locale());
                            } else{
                                frase_final << alfabeto[j];
                            }
                            
                            break;
                        }
                    }
                } else{
                    frase_final << frases[k][i];
                }
            }
            
            cout << frase_final.str() << endl;
            
            frase_final.str("");
        }
        
        cout << endl;
    }
    
    return 0;
}
