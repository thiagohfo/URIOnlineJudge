//
//  URI 1478.cpp
//  Pratica
//
//  Created by Thiago Henrique on 20/10/17.
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
            
            for(int i = 0; i < N; i++){
                M[0][i] = i + 1;
                M[i][0] = i + 1;
            }
            
            for(int i = 1; i < N; i++){
                for(int j = 1; j < N; j++){
                    M[i][j] = M[i - 1][j - 1];
                }
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

