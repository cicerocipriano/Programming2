#include <string>
#include "produto.h"
#include "remedio.h"

Remedio::Remedio(unsigned int codigo, std::string descricao, double preco_de_compra, double percentual_de_lucro, double valor_desconto_laboratorio):
    Produto(codigo,descricao,preco_de_compra,percentual_de_lucro), _valor_desconto_laboraorio(valor_desconto_laboratorio) {}

Remedio::~Remedio(){}

double Remedio::gerarPrecoDeVenda(){
    return _preco_de_compra * (1.0 + _percentual_de_lucro) - _valor_desconto_laboraorio;
}
