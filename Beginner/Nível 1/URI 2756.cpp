//
//  URI 2756.cpp
//  URIOnlineJudge
//
//  Created by Thiago Henrique on 07/10/19.
//  Copyright © 2019 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void espacoBranco (int t_cont) {
    for (int i = 0; i < t_cont; i++) {
        cout << " ";
    }
}

int main (int argc, char* argv[]) {
    int cont = -1;
    
    for (int i = 7; i >= 3; i--) {
        espacoBranco(i);
        
        if (i == 7) {
            cout << "A" << endl;
        } else if (i == 6) {
            cout << "B";
            espacoBranco(cont);
            cout << "B" << endl;
        } else if (i == 5) {
            cout << "C";
            espacoBranco(cont);
            cout << "C" << endl;
        } else if (i == 4) {
            cout << "D";
            espacoBranco(cont);
            cout << "D" << endl;
        } else if (i == 3) {
            cout << "E";
            espacoBranco(cont);
            cout << "E" << endl;
        }
        
        if (cont < 7) {
            cont += 2;
        }
    }
    
    for (int i = 4; i < 8; i++) {
        cont -= 2;
        
        espacoBranco(i);
        
        if (i == 7) {
            cout << "A" << endl;
        } else if (i == 6) {
            cout << "B";
            espacoBranco(cont);
            cout << "B" << endl;
        } else if (i == 5) {
            cout << "C";
            espacoBranco(cont);
            cout << "C" << endl;
        } else if (i == 4) {
            cout << "D";
            espacoBranco(cont);
            cout << "D" << endl;
        } else if (i == 3) {
            cout << "E";
            espacoBranco(cont);
            cout << "E" << endl;
        }
    }
    
    return 0;
}
