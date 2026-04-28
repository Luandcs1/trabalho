#include <iostream>
#include <stack>
#include "include/hanoi.h"

using namespace std;

int main() {
    int n;

    cout << "Digite o numero de discos (1 a 10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Numero invalido!" << endl;
        return 1;
    }

    stack<int> A, B, C;

    for (int i = n; i >= 1; i--) {
        A.push(i);
    }

    int movimentos = 0;

    imprimirPilhas(A, B, C);

    hanoi(n, A, C, B, 'A', 'C', 'B', movimentos, A, B, C);

    cout << "Total de movimentos: " << movimentos << endl;

    return 0;
}
