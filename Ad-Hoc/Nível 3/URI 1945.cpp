//
//  URI 1945.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 27/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <ctype.h>

using namespace std;

vector<vector<string>> programa;

bool isNumber (string temp) {
    for (int i = 0; i < temp.length(); i++) {
        if (isdigit(temp[i]) == false) {
            return false;
        }
    }
    
    return true;
}

string valorVariavel (string temp) {
    string valor;
    
    for (int i = 0; i < programa.size(); i++) {
        if (programa[i][0] == temp) {
            if (isNumber(programa[i][1]) && programa[i].size() == 2) {
                valor = programa[i][1];
                break;
            } else if (isNumber(programa[i][1]) == false && programa[i].size() == 2) {
                valor = valorVariavel(programa[i][1]);
                break;
            } else if (programa[i].size() == 3) {
                if (isNumber(programa[i][1]) == false && isNumber(programa[i][2])) {
                    int num_temp = 0;
                    
                    valor = valorVariavel(programa[i][1]);
                    
                    num_temp = stoi(valor);
                    
                    valor = programa[i][2];
                    
                    num_temp += stoi(valor);
                    
                    valor = to_string(num_temp);
                    break;
                } else if (isNumber(programa[i][1]) && isNumber(programa[i][2]) == false) {
                    int num_temp = 0;
                    
                    valor = valorVariavel(programa[i][2]);
                    
                    num_temp = stoi(valor);
                    
                    valor = programa[i][1];
                    
                    num_temp += stoi(valor);
                    
                    valor = to_string(num_temp);
                    break;
                } else if (isNumber(programa[i][1]) == false && isNumber(programa[i][2]) == false) {
                    int num_temp = 0;
                    
                    valor = valorVariavel(programa[i][1]);
                    
                    num_temp = stoi(valor);
                    
                    valor = valorVariavel(programa[i][2]);
                    
                    num_temp += stoi(valor);
                    
                    valor = to_string(num_temp);
                }
            }
        }
    }
    
    return valor;
}

int main () {
    string instrucao, token;
    char delimiter = ' ';
    int contador = 0;
    
    ios_base::sync_with_stdio(false);
    
    programa.reserve(2000);
    
    while (getline(cin, instrucao) && !instrucao.empty()) {
        istringstream iss(instrucao);
        
        programa.push_back(vector<string>(0));
        programa[contador].reserve(3);
        
        while (getline(iss, token, delimiter)) {
            if (token == ":=" || token == "+") {
                continue;
            } else {
                programa[contador].push_back(token);
            }
        }
        
        contador++;
    }
    
    if (isNumber(programa[programa.size() - 1][1]) && programa[programa.size() - 1].size() == 2) {
        cout << programa[programa.size() - 1][1] << endl;
    } else if (isNumber(programa[programa.size() - 1][1]) == false && programa[programa.size() - 1].size() == 2) {
        cout << valorVariavel(programa[programa.size() - 1][1]) << endl;
    } else if (programa[programa.size() - 1].size() == 3) {
        if (isNumber(programa[programa.size() - 1][1]) && isNumber(programa[programa.size() - 1][2])) {
            int temp1 = stoi(programa[programa.size() - 1][1]);
            int temp2 = stoi(programa[programa.size() - 1][2]);
            
            cout << temp1 + temp2 << endl;
        } else if (isNumber(programa[programa.size() - 1][1]) == false && isNumber(programa[programa.size() - 1][2])) {
            int temp1 = stoi(valorVariavel(programa[programa.size() - 1][1]));
            int temp2 = stoi(programa[programa.size() - 1][2]);
            
            cout << temp1 + temp2 << endl;
        } else if (isNumber(programa[programa.size() - 1][1]) && isNumber(programa[programa.size() - 1][2]) == false) {
            int temp1 = stoi(programa[programa.size() - 1][1]);
            int temp2 = stoi(valorVariavel(programa[programa.size() - 1][2]));
            
            cout << temp1 + temp2 << endl;
        } else if (isNumber(programa[programa.size() - 1][1]) == false && isNumber(programa[programa.size() - 1][2]) == false) {
            int temp1 = stoi(valorVariavel(programa[programa.size() - 1][1]));
            int temp2 = stoi(valorVariavel(programa[programa.size() - 1][2]));
            
            cout << temp1 + temp2 << endl;
        }
    }
    
    return 0;
}
