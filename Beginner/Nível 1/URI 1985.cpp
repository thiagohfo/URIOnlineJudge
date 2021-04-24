//
//  URI 1985.cpp
//  Pratica
//
//  Created by Thiago Henrique on 26/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N, produto, qtd_produto;
    float preco = 0, produtos[5] = {1.50, 2.50, 3.50, 4.50, 5.50};
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> produto >> qtd_produto;
        
        preco += (produtos[produto - 1001] * qtd_produto);
    }
    
    cout << fixed;
    cout.precision(2);
    cout << preco << endl;
    
    return 0;
}
