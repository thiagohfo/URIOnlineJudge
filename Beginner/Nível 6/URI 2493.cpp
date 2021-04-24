//
//  URI 2493.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T, numero_temp;
    string temp;
    char lixo;
    vector<string> perdedores;
    
    while(cin >> T){
        long long int numeros[T][3];
        int numeros_escolhidos[T], acertos = 0;
        string nomes[T];
        char operacoes[T];
        
        for(int i = 0; i < T; i++){
            cin >> numeros[i][0] >> numeros[i][1] >> lixo >> numeros[i][2];
        }
        
        for(int i = 0; i < T; i++){
            cin >> nomes[i] >> numero_temp >> operacoes[i];
            
            numeros_escolhidos[i] = numero_temp - 1;
        }
        
        for(int i = 0; i < T; i++){
            switch(operacoes[i]){
                case '+':
                    if(numeros[numeros_escolhidos[i]][0] + numeros[numeros_escolhidos[i]][1] != numeros[numeros_escolhidos[i]][2]){
                        acertos++;
                        
                        perdedores.push_back(nomes[i]);
                    }
                    
                    break;
                    
                case '-':
                    if(numeros[numeros_escolhidos[i]][0] - numeros[numeros_escolhidos[i]][1] != numeros[numeros_escolhidos[i]][2]){
                        acertos++;
                        
                        perdedores.push_back(nomes[i]);
                    }
                    
                    break;
                    
                case '*':
                    if(numeros[numeros_escolhidos[i]][0] * numeros[numeros_escolhidos[i]][1] != numeros[numeros_escolhidos[i]][2]){
                        acertos++;
                        
                        perdedores.push_back(nomes[i]);
                    }
                    
                    break;
                    
                case 'I':
                    if((numeros[numeros_escolhidos[i]][0] + numeros[numeros_escolhidos[i]][1] == numeros[numeros_escolhidos[i]][2]) || (numeros[numeros_escolhidos[i]][0] - numeros[numeros_escolhidos[i]][1] == numeros[numeros_escolhidos[i]][2]) || (numeros[numeros_escolhidos[i]][0] * numeros[numeros_escolhidos[i]][1] == numeros[numeros_escolhidos[i]][2])){
                        acertos++;
                        
                        perdedores.push_back(nomes[i]);
                    }
                    
                    break;
            }
        }
        
        if(acertos == T){
            cout << "None Shall Pass!" << endl;
        } else if(acertos == 0){
            cout << "You Shall All Pass!" << endl;
        } else{
            /*for(int i = 0; i < perdedores.size() - 1; i++){
                for(int j = i + 1; j < perdedores.size(); j++){
                    if(perdedores[i][0] > perdedores[j][0]){
                        temp = perdedores[j];
                        perdedores[j] = perdedores[i];
                        perdedores[i] = temp;
                    }
                }
            }*/
            
            sort(perdedores.begin(), perdedores.end());
            
            for(int i = 0; i < perdedores.size(); i++){
                cout << perdedores[i];
                
                if(i < perdedores.size() - 1){
                    cout << " ";
                } else{
                    cout << endl;
                }
            }
        }
        
        perdedores.clear();
        acertos = 0;
        
    }
    
    return 0;
}
