#ifndef ARTIGOHIGIENE_H
#define ARTIGOHIGIENE_H

#include <string>
#include "produto.h"

class ArtigoHigiene: public Produto{
public:
    ArtigoHigiene(unsigned int codigo, std::string descricao, double preco_de_compra, double percentual_de_lucro);
    ~ArtigoHigiene();
    double gerarPrecoDeVenda();
};

#endif // ARTIGOHIGIENE_H
