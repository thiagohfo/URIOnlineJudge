//
//  URI 1962.cpp
//  Pratica
//
//  Created by Thiago Henrique on 06/11/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, tempo;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> tempo;
        
        if(tempo >= 2015){
            tempo += 1;
        }
        
        if(tempo > 2015){
            cout << tempo - 2015 << " A.C." << endl;
        }
        else{
            cout << 2015 - tempo << " D.C." << endl;
        }
    }
    
    return 0;
}
