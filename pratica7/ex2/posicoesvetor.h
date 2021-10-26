#ifndef POSICOESVETOR_H
#define POSICOESVETOR_H

#include <vector>

class PosicoesVetor{
private:
    int* _vetor;
    int _y;
    std::vector<int> _posicoes;

    void trata_excecao_y(int& y);
    void trata_excecao_aux(int& aux);
    void trata_excecao_pos(int& pos, int y);
public:
    PosicoesVetor();
    ~PosicoesVetor();
};

#endif // POSICOESVETOR_H
