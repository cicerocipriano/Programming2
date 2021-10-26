#include "excecaoex2.h"
#include <iostream>

using namespace std;

const void excecaoEx2::tamanho_invalido() const noexcept{
    cout << "O vetor deve ter pelo menos uma posicao. Tente novamente" << endl;
}

const void excecaoEx2::posicao_invalida() const noexcept{
    cout << "Essa posicao nao existe no vetor. tente novamente." << endl;
}

const void excecaoEx2::posicao_repetida() const noexcept{
    cout << "Essa posicao ja foi usada. Tente novamente." << endl;
}

const void excecaoEx2::outro_caractere_nat() const noexcept{
    cout << "Voce nao escreveu um numero natural. Tente novamente." << endl;
}

const void excecaoEx2::outro_caractere_int() const noexcept{
    cout << "Voce nao escreveu um numero inteiro. Tente novamente." << endl;
}

const void excecaoEx2::nao_inteiro() const noexcept{
    cout << "Voce noa escreveu um inteiro. Tente novamente." << endl;
}
