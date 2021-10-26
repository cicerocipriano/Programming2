#include <string>
#include "produto.h"

Produto::Produto(unsigned int codigo, std::string descricao, double preco_de_compra, double percentual_de_lucro):
    _codigo(codigo), _descricao(descricao), _preco_de_compra(preco_de_compra), _percentual_de_lucro(percentual_de_lucro) {}

Produto::~Produto(){}
