//
//  URI 2338.cpp
//  Pratica
//
//  Created by Thiago Henrique on 21/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

inline void mostrarLetra(string letra_decodificada){
    string letras[26];
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    letras[0] = ".-";
    letras[1] = "-...";
    letras[2] = "-.-.";
    letras[3] = "-..";
    letras[4] = ".";
    letras[5] =  "..-.";
    letras[6] = "--.";
    letras[7] = "....";
    letras[8] = "..";
    letras[9] = ".---";
    letras[10] = "-.-";
    letras[11] = ".-..";
    letras[12] = "--";
    letras[13] = "-.";
    letras[14] = "---";
    letras[15] = ".--.";
    letras[16] = "--.-";
    letras[17] = ".-.";
    letras[18] = "...";
    letras[19] = "-";
    letras[20] = "..-";
    letras[21] = "...-";
    letras[22] = ".--";
    letras[23] = "-..-";
    letras[24] = "-.--";
    letras[25] = "--..";
    
    for(int i = 0; i < 26; i++){
        if(letras[i] == letra_decodificada){
            cout << alfabeto[i];
            
            break;
        }
    }
}

int main(){
    int N, cont = 0, cont_pontos = 0, cont_tracos = 0;
    string codigo;
    stringstream letra;
    
    cin >> N;
    
    for(int k = 0; k < N; k++){
        cin >> codigo;
        
        while(cont < codigo.size()){
            if(codigo[cont] == '=' && (codigo[cont + 1] != '=' || cont == (codigo.size() - 1)) && (codigo[cont - 1] != '=' || cont == 0) && cont_pontos == 0){
                letra << '.';
                cont++;
            } else if(codigo[cont] == '='){
                cont++;
                cont_tracos++;
                
                if(cont_tracos == 3){
                    letra << '-';
                    cont_tracos = 0;
                }
            } else{
                if(codigo[cont] == '.' && (codigo[cont + 1] == '.' || cont == codigo.size() - 1 || cont_pontos > 0)){
                    cont_pontos++;
    
                    if(cont_pontos == 3 && codigo[cont + 1] != '.'){
                        mostrarLetra(letra.str());
                        letra.str("");
                        cont_pontos = 0;
                    } else if(cont_pontos == 7){
                        mostrarLetra(letra.str());
                        letra.str("");
                        cont_pontos = 0;
                        
                        cout << " ";
                    }
                }
                
                cont++;
            }
            
            if(cont == codigo.size()){
                mostrarLetra(letra.str());
                letra.str("");
                cont_pontos = 0;
            }
        }
        
        cout << endl;
        
        cont = 0;
        cont_pontos = 0;
        cont_tracos = 0;
    }

    return 0;
}
