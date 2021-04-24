//
//  URI 1042.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 18/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int tamanho = 3;
    int vetor[tamanho], vetor_ord[tamanho];
    
    for(int i = 0; i < tamanho; i++){
      cin >> vetor[i];
      vetor_ord[i] = vetor[i];
    }
    
    sort(vetor_ord, vetor_ord + tamanho);
    
    for(int i = 0; i < tamanho; i++){
      cout << vetor_ord[i] << endl;
    }
    
    cout << endl;
    
    for(int i = 0; i < tamanho; i++){
      cout << vetor[i] << endl;
    }
    
    return 0;
}
