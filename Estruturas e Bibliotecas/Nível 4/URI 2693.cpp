//
//  URI 2693.cpp
//  Pratica
//
//  Created by Thiago Henrique on 18/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    struct Aluno{
        string nome;
        char regiao;
        int distancia;
    };
    
    int Q;
    
    while(cin >> Q){
        Aluno alunos[Q], temp;
        
        for(int i = 0; i < Q; i++){
            cin >> alunos[i].nome;
            cin >> alunos[i].regiao;
            cin >> alunos[i].distancia;
        }
        
        for(int i = 0; i < Q - 1; i++){
            for(int j = i + 1; j < Q; j++){
                if(alunos[i].distancia > alunos[j].distancia){
                    temp = alunos[i];
                    alunos[i] = alunos[j];
                    alunos[j] = temp;
                }
                
                if(alunos[i].distancia == alunos[j].distancia){
                    if(alunos[j].regiao == 'L' && (alunos[i].regiao == 'N' || alunos[i].regiao == 'O' || alunos[i].regiao == 'S')){
                        temp = alunos[i];
                        alunos[i] = alunos[j];
                        alunos[j] = temp;
                    }
                    else if(alunos[j].regiao == 'N' && (alunos[i].regiao == 'O' || alunos[i].regiao == 'S')){
                        temp = alunos[i];
                        alunos[i] = alunos[j];
                        alunos[j] = temp;
                    }
                    else if(alunos[j].regiao == 'O' && alunos[i].regiao == 'S'){
                        temp = alunos[i];
                        alunos[i] = alunos[j];
                        alunos[j] = temp;
                    }
                    else if(alunos[i].regiao == alunos[j].regiao){
                        if(alunos[i].nome[0] > alunos[j].nome[0]){
                            temp = alunos[i];
                            alunos[i] = alunos[j];
                            alunos[j] = temp;
                        }
                    }
                }
            }
        }
        
        for(int i = 0; i < Q; i++){
            cout << alunos[i].nome << endl;
        }
    }
    
    return 0;
}
