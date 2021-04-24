//
//  URI 1789.cpp
//  Pratica
//
//  Created by Thiago Henrique on 22/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, mais_rapida = 0;
    
    while(cin >> N){
        int lesmas[N];
        
        for(int i = 0; i < N; i++){
            cin >> lesmas[i];
            
            if(lesmas[i] > mais_rapida){
                mais_rapida = lesmas[i];
            }
        }
        
        if(mais_rapida < 10){
            cout << "1" << endl;
        }
        else if(mais_rapida >= 10 && mais_rapida < 20){
            cout << "2" << endl;
        }
        else if(mais_rapida >= 20){
            cout << "3" << endl;
        }
        
        mais_rapida = 0;
        
    }
    
    return 0;
}
