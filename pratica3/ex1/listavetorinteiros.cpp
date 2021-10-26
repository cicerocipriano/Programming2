#include <iostream>
#include "listavetorinteiros.h"

ListaVetorInteiros::ListaVetorInteiros() {
    _elementos = new int[TAMANHO_INICIAL]();
    _num_elementos_inseridos = 0;
    _capacidade = TAMANHO_INICIAL;
}

void ListaVetorInteiros::inserir_elemento(int elemento) {
    if (_num_elementos_inseridos == TAMANHO_INICIAL) {
        int *new_data = new int[_capacidade*2];
        for (int i = 0; i < _num_elementos_inseridos; i++)
            new_data[i] = _elementos[i];
        delete[] _elementos;
        _elementos = new_data;
        _capacidade *= 2;
    }
    _elementos[_num_elementos_inseridos] = elemento;
    _num_elementos_inseridos++;
}

void ListaVetorInteiros::remover_primeiro() {
    int *new_data = new int[_capacidade];
    for (int i = 0; i < _num_elementos_inseridos-1; i++) {
        new_data[i] = _elementos[i+1];
    }
    delete[] _elementos;
    _elementos = new_data;
    _num_elementos_inseridos--;
}

void ListaVetorInteiros::remover_ultimo() {
    _num_elementos_inseridos--;
}

void ListaVetorInteiros::inverte() {
    for (int i = 0; i < _num_elementos_inseridos/2; i++) {
        int aux = _elementos[i];
        _elementos[i] = _elementos[_num_elementos_inseridos-1-i];
        _elementos[_num_elementos_inseridos-1-i] = aux;
    }
}

void ListaVetorInteiros::imprimir() {
    for (int i = 0; i < _num_elementos_inseridos; i++)
        std::cout << _elementos[i] << " ";
    std::cout << std::endl;
}

ListaVetorInteiros::~ListaVetorInteiros() {
    delete[] _elementos;
}
