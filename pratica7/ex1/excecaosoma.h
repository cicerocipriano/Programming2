#ifndef EXCECAOSOMA_H
#define EXCECAOSOMA_H

#include <iostream>
#include <vector>
#include "excecaoacimadex.h"

class excecaoSoma{
private:
    double _x, _soma, _somados, _media;
    std::vector<int> _numeros;

    // TRATAMENTO DE EXCECOES
    void trata_excecao_x(double& x);
    void trata_excecao_num(double& num);
public:
    // CONSTRUTOR E DESTRUTOR
    excecaoSoma();
    ~excecaoSoma();
};

#endif // EXCECAOSOMA_H
