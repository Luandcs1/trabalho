#ifndef HANOI_HPP
#define HANOI_HPP

#include <stack>

void imprimirPilhas(std::stack<int> A, std::stack<int> B, std::stack<int> C);

void hanoi(int n,
           std::stack<int> &origem,
           std::stack<int> &destino,
           std::stack<int> &auxiliar,
           char nomeOrigem,
           char nomeDestino,
           char nomeAuxiliar,
           int &movimentos,
           std::stack<int> &A,
           std::stack<int> &B,
           std::stack<int> &C);

#endif
