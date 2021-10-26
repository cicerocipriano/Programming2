#ifndef REMEDIO_H
#define REMEDIO_H

#include <string>
#include "produto.h"

class Remedio: public Produto{
protected:
    double _valor_desconto_laboraorio;
public:
    Remedio(unsigned int codigo, std::string descricao, double preco_de_compra, double percentual_de_lucro, double valor_desconto_laboratorio);
    ~Remedio();
    double gerarPrecoDeVenda();
};

#endif // REMEDIO_H
