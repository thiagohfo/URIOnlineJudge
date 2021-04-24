//
//  URI 2752.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 05/01/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iomanip>

using namespace std;

int main () {
    string temp = "AMO FAZER EXERCICIO NO URI";
    
    printf("<%s>\n", temp.c_str());
    
    printf("<%30s>\n", temp.c_str());
    
    printf("<%.20s>\n", temp.c_str());
    
    printf("<%-20s>\n", temp.c_str());
    
    printf("<%-30s>\n", temp.c_str());
    
    printf("<%.30s>\n", temp.c_str());
    
    printf("<%30.20s>\n", temp.c_str());
    
    printf("<%-30.20s>\n", temp.c_str());
    
    return 0;
}
