//
//  URI 2631.cpp
//  Treinamento Programacao
//
//  Created by Thiago Henrique on 22/12/18.
//  Copyright © 2018 Thiago Henrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

vector<unsigned int> representante;
vector<unsigned int> rank_vector;

int findSet (int i) {
    while (i != representante[i]) {
        i = representante[i];
    }

    return i;
}

bool sameSet (int i, int j) {
    if (findSet(i) == findSet(j)) {
        return true;
    } else {
        return false;
    }
}

void unionSet (int i, int j) {
    if (sameSet(i, j)) {
        return;
    }

    int x = findSet(i), y = findSet(j);

    if (rank_vector[x] > rank_vector[y]) {
        representante[y] = x;
    } else {
        representante[x] = y;

        if (rank_vector[x] == rank_vector[y]) {
            rank_vector[y]++;
        }
    }
}

int main () {
    int N, Q, aluno1 = 0, aluno2 = 0;
    long int M;
    bool pode_imprimir = false;

    ios_base::sync_with_stdio(false);

    while (cin >> N >> M >> Q) {
        representante.assign(N, 0);
        rank_vector.assign(N, 0);

        if (pode_imprimir) {
            cout << endl;
        } else {
            pode_imprimir = true;
        }

        for (unsigned i = 0; i < N; i++) {
            representante[i] = i;
        }

        for (unsigned i = 0; i < M; i++) {
            cin >> aluno1 >> aluno2;

            unionSet(aluno1 - 1, aluno2 - 1);
        }

        aluno1 = 0;
        aluno2 = 0;

        for (int i = 0; i < Q; i++) {
            cin >> aluno1 >> aluno2;

            if (sameSet(aluno1 - 1, aluno2 - 1)) {
                cout << "S" << endl;
            } else {
                cout << "N" << endl;
            }
        }

        representante.clear();
        rank_vector.clear();
    }

    return 0;
}
