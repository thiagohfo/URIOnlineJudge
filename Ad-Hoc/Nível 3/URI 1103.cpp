//
//  URI 1103.cpp
//  Pratica
//
//  Created by Thiago Henrique on 21/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int h1, h2, m1, m2, tempo = 0;
    
    while(cin >> h1 >> m1 >> h2 >> m2){
        if(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0){
            return 0;
        }
        
        if(h1 > h2 || (h1 == h2 && m1 > m2)){
            tempo += ((24 - h1) + h2) * 60;
        }
        else if(h2 > h1){
            tempo += (h2 - h1) * 60;
        }
        
        if(m1 > m2){
            tempo += (60 - m1) + m2;
            tempo -= 60;
        }
        else if(m2 > m1 || (h1 == h2 && m1 < m2)){
            tempo += m2 - m1;
        }
        
        cout << tempo << endl;
        
        tempo = 0;
    }
    
    return 0;
}
