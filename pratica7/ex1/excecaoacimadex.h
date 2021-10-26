#ifndef EXCECAOACIMADEX_H
#define EXCECAOACIMADEX_H

#include <iostream>
#include <exception>

using namespace std;

class ExcecaoAcimaDeX : public exception{
public:
    const void outro_caractere() const noexcept;
    const void numero_baixo() const noexcept;
    const void x_muito_alto() const noexcept;
    const void soma_muito_alta() const noexcept;
};

#endif // EXCECAOACIMADEX_H
