#include <string>
#include "produto.h"
#include "artigohigiene.h"

ArtigoHigiene::ArtigoHigiene(unsigned int codigo, std::string descricao, double preco_de_compra, double percentual_de_lucro):
    Produto(codigo,descricao,preco_de_compra,percentual_de_lucro) {}

ArtigoHigiene::~ArtigoHigiene(){}

double ArtigoHigiene::gerarPrecoDeVenda(){
    return _preco_de_compra * (1.0 + _percentual_de_lucro);
}
