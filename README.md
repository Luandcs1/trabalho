# Torre de Hanói com Pilhas em C++

## Descrição

Implementação da Torre de Hanói utilizando pilhas (std::stack) em C++.

## Funcionalidades

* Entrada do número de discos (1 a 10)
* Uso de três pilhas (A, B e C)
* Solução recursiva
* Exibição de cada movimento
* Exibição do estado das pilhas
* Total de movimentos ao final

## Execução

Compilar:
g++ main.cpp src/*.cpp -o hanoi

Executar:
./hanoi

## Perguntas

1. A pilha é adequada pois segue o princípio LIFO, permitindo acesso apenas ao topo, como exigido no problema.

2. É possível resolver sem recursão utilizando abordagem iterativa e controle manual das operações, porém a recursão é mais direta.

Luan Damasio Costa e Sousa
28/04/2026
