//
//  URI 1534.cpp
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
    int N;
    
    while(cin >> N){
        int M[N][N];

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i == j){
                    if((N / 2 == i) && (N % 2 == 1) && (N > 1)){
                        M[i][j] = 2;
                    }
                    else{
                        M[i][j] = 1;
                    }
                }
                else if(i == ((N - 1) - j) || j == ((N - 1) - i)){
                    M[i][j] = 2;
                }
                else{
                    M[i][j] = 3;
                }
            }
        }
            
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << M[i][j];
            }
                
            cout << endl;
        }
    }
    
    return 0;
}
