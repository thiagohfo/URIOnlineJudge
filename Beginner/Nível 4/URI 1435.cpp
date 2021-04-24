//
//  URI 1435.cpp
//  Pratica
//
//  Created by Thiago Henrique on 19/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N, numero, cont = 1;
    
    cin >> N;
    
    while(1){
        if(N == 0){
            break;
        }
        else{
            int M[N][N];
            
            if(N % 2 == 0){
                numero = N / 2;
            }
            else{
                numero = (N / 2) + 1;
            }
            
            for(int k = 0; k < numero; k++){
                for(int i = 0 + k; i < N - k; i++){
                    for(int j = 0 + k; j < N - k; j++){
                        M[i][j] = cont;
                    }
                }
                
                cont++;
            }
            
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    if(j == 0){
                        printf("%3d", M[i][j]);
                    }
                    else{
                        printf(" %3d", M[i][j]);
                    }
                }
                
                cout << endl;
            }
            
            cout << endl;
            
            cont = 1;
        }
        
        cin >> N;
    }
    
    return 0;
}
