//
//  URI 1827.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, limite;
    
    while(cin >> N){
        int M[N][N];
        
        limite = N / 3;
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i >= limite && j >= limite && i < (N - limite) && j < (N - limite)){
                    if(i == (N / 2) && j == (N / 2)){
                        M[i][j] = 4;
                    }
                    else{
                        M[i][j] = 1;
                    }
                }
                else{
                    if(i == j){
                        M[i][j] = 2;
                    }
                    else if(j == ((N - 1) - i)){
                        M[i][j] = 3;
                    }
                    else{
                        M[i][j] = 0;
                    }
                }
            }
        }
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << M[i][j];
            }
            
            cout << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}
