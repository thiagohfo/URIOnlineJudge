//
//  URI 1129.cpp
//  Pratica
//
//  Created by Thiago Henrique on 20/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <array>

using namespace std;

int main(){
    int N, contB = 0, alternativa;
    array<int, 5> resposta;
    
    while(cin >> N){
        if(N == 0){
            return 0;
        }
        else{
            for(int k = 0; k < N; k++){
                cin >> resposta[0] >> resposta[1] >> resposta[2] >> resposta[3] >> resposta[4];
                
                for(int i = 0; i < resposta.size(); i++){
                    if(resposta[i] <= 127){
                        contB++;
                        alternativa = i + 1;
                    }
                }
                
                if(contB > 1 || contB == 0){
                    cout << "*" << endl;
                }
                else{
                    switch(alternativa){
                        case 1:
                            cout << "A" << endl;
                            break;
                        case 2:
                            cout << "B" << endl;
                            break;
                        case 3:
                            cout << "C" << endl;
                            break;
                        case 4:
                            cout << "D" << endl;
                            break;
                        case 5:
                            cout << "E" << endl;
                            break;
                    }
                }
                
                contB = 0;
            }
        }
    }
    
    return 0;
}
