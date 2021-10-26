#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto{
protected:
    unsigned int _codigo;
    std::string _descricao;
    double _preco_de_compra;
    double _percentual_de_lucro;
public:
    Produto(unsigned int codigo, std::string descricao, double preco_de_compra, double percentual_de_lucro);
    ~Produto();
    virtual double gerarPrecoDeVenda() = 0;
};

#endif // PRODUTO_H
