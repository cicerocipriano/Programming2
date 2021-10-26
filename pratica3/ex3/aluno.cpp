#include <iostream>
#include "aluno.h"

Aluno::Aluno() {
    _nome = nullptr;
    _matricula = 0;
    _notas = nullptr;
    _media_notas = 0;
}

void Aluno::get_nome_aluno() {
    char nome[1056]; // o maior nome do mundo tem esse tamanho kk
    std::cout << "Escreva o nome do aluno: ";
    std::cin.getline(nome,1056);
    int tamanho = 0;
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i+1] == '\0') {
            tamanho += 2;
            _nome = new char[tamanho];
            break;
        }
        tamanho++;
    }
    for (int i = 0; i < tamanho; i++)
        _nome[i] = nome[i];
}

void Aluno::get_matricula() {
    std::cout << "Escreva a matricula do aluno: ";
    std::cin >> _matricula;
}

void Aluno::adicionarNota() {
    int disciplinas;
    std::cout << "Escreva quantas disciplinas o aluno fez: ";
    std::cin >> disciplinas;
    std::cout << "Escreva a(s) nota(s) da(s) disciplina(s), separadas por espaco (caso exista mais de uma):" << std::endl;
    _notas = new int[disciplinas+1];
    for (int i = 0; i < disciplinas; i++)
        std::cin >> _notas[i];
    _notas[disciplinas] = -1;
}

void Aluno::calculaMediaAluno(int *notas) {
    int i;
    for (i = 0; notas[i] != -1; i++) {
        _media_notas += notas[i];
    }
    _media_notas /= i;
}

void Aluno::imprimeInformacoesAluno() {
    std::cout << "Nome: " << _nome << std::endl;
    std::cout << "Matricula: " << _matricula << std::endl;
    std::cout << "Nota(s) da(s) disciplina(s):" << std::endl;
    for (int i = 0; _notas[i] != -1; i++)
        std::cout << _notas[i] << " ";
    std::cout << std::endl;
    std::cout << "Media da(s) disciplina(s): " << _media_notas << std::endl;
}

Aluno::~Aluno() {
    delete[] _nome;
    delete[] _notas;
}
