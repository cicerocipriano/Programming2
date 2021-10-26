#include <iostream>
#include "excecaoacimadex.h"

using namespace std;

const void ExcecaoAcimaDeX::outro_caractere() const noexcept{
    cout << "Voce nao escreveu um numero. Tente novamente." << endl;
}

const void ExcecaoAcimaDeX::numero_baixo() const noexcept{
    cout << "Voce deve escrever um numero maior que zero. Tente novamente." << endl;
}

const void ExcecaoAcimaDeX::x_muito_alto() const noexcept{
    cout << "O x nao pode ser maior que 100. Tente novamente." << endl;
}

const void ExcecaoAcimaDeX::soma_muito_alta() const noexcept{
    cout  << "O ultimo numero digitado faria com que a soma foi maior que o x." << endl;
}
