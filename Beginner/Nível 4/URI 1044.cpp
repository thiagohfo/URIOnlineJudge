//
//  URI 1044.cpp
//  Pratica
//
//  Created by Thiago Henrique on 12/10/17.
//  Copyright © 2017 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int A, B;
    
    cin >> A >> B;
    
    if(B % A == 0 || A % B == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else
    {
        cout << "Nao sao Multiplos" << endl;
    }
    
    return 0;
}
