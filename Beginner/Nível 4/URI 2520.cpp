//
//  URI 2520.cpp
//  Pratica
//
//  Created by Thiago Henrique on 28/11/2017.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, M, minha_pos_l, minha_pos_c, pokemon_pos_l, pokemon_pos_c, distancia = 0;
    
    while(cin >> N >> M){
        int cidade[N][M];
        
        for(int l = 0; l < N; l++){
            for(int c = 0; c < M; c++){
                cin >> cidade[l][c];
                
                if(cidade[l][c] == 1){
                    minha_pos_l = l;
                    minha_pos_c = c;
                } else if(cidade[l][c] == 2){
                    pokemon_pos_l = l;
                    pokemon_pos_c = c;
                }
            }
        }
        
        if(pokemon_pos_l > minha_pos_l){
            distancia += pokemon_pos_l - minha_pos_l;
        } else if(pokemon_pos_l < minha_pos_l){
            distancia += minha_pos_l - pokemon_pos_l;
        } else{
            distancia += 0;
        }
        
        if(pokemon_pos_c > minha_pos_c){
            distancia += pokemon_pos_c - minha_pos_c;
        } else if(pokemon_pos_c < minha_pos_c){
            distancia += minha_pos_c - pokemon_pos_c;
        } else{
            distancia += 0;
        }
        
        cout << distancia << endl;
        
        pokemon_pos_l = 0;
        pokemon_pos_c = 0;
        minha_pos_l = 0;
        minha_pos_c = 0;
        distancia = 0;
    }
    
    return 0;
}
