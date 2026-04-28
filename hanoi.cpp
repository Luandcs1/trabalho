#include <iostream>
#include "../include/hanoi.h"

using namespace std;

void imprimirPilhas(stack<int> A, stack<int> B, stack<int> C) {
    cout << " A: [";
    while (!A.empty()) {
        cout << A.top();
        A.pop();
        if (!A.empty()) cout << ", ";
    }
    cout << "]   B: [";

    while (!B.empty()) {
        cout << B.top();
        B.pop();
        if (!B.empty()) cout << ", ";
    }
    cout << "]   C: [";

    while (!C.empty()) {
        cout << C.top();
        C.pop();
        if (!C.empty()) cout << ", ";
    }
    cout << "]" << endl;
}

void hanoi(int n,
           stack<int> &origem,
           stack<int> &destino,
           stack<int> &auxiliar,
           char nomeOrigem,
           char nomeDestino,
           char nomeAuxiliar,
           int &movimentos,
           stack<int> &A,
           stack<int> &B,
           stack<int> &C) {

    if (n == 1) {
        int disco = origem.top();
        origem.pop();
        destino.push(disco);

        movimentos++;
        cout << "Mover disco " << disco << " de "
             << nomeOrigem << " para " << nomeDestino << endl;

        imprimirPilhas(A, B, C);
        return;
    }

    hanoi(n - 1, origem, auxiliar, destino,
          nomeOrigem, nomeAuxiliar, nomeDestino,
          movimentos, A, B, C);

    int disco = origem.top();
    origem.pop();
    destino.push(disco);

    movimentos++;
    cout << "Mover disco " << disco << " de "
         << nomeOrigem << " para " << nomeDestino << endl;

    imprimirPilhas(A, B, C);

    hanoi(n - 1, auxiliar, destino, origem,
          nomeAuxiliar, nomeDestino, nomeOrigem,
          movimentos, A, B, C);
}
