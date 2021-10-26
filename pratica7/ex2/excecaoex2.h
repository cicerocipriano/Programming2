#ifndef EXCECAOEX2_H
#define EXCECAOEX2_H

#include <iostream>
#include <exception>

using namespace std;

class excecaoEx2 : public exception{
public:
    const void tamanho_invalido() const noexcept;
    const void posicao_invalida() const noexcept;
    const void posicao_repetida() const noexcept;
    const void outro_caractere_nat() const noexcept;
    const void outro_caractere_int() const noexcept;
    const void nao_inteiro() const noexcept;
};

#endif // EXCECAOEX2_H
