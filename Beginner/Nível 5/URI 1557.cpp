//
//  URI 1557.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
    int N, tamanho;
    
    while(cin >> N){
        if(N == 0){
            return 0;
        }
        else{
            int M[N][N];
            
            M[0][0] = 1;
            
            for(int i = 1; i < N; i++){
                M[0][i] = M[0][i - 1] * 2;
                M[i][0] = M[i - 1][0] * 2;
            }
            
            for(int i = 1; i < N; i++){
                for(int j = 1; j < N; j++){
                    M[i][j] = M[i][j - 1] * 2;
                }
            }
            
            tamanho = int(to_string(M[N - 1][N - 1]).length());
            
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(j == 0){
                         printf("%*d", tamanho, M[i][j]);
                    }
                    else{
                        printf(" %*d", tamanho, M[i][j]);
                    }
                }
                
                printf("\n");
            }
            
            printf("\n");
        }
    }
    
    return 0;
}
