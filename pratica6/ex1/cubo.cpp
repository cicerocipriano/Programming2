#include <string>
#include "forma.h"
#include "forma3d.h"
#include "cubo.h"

Cubo::Cubo(std::string cor, std::string nome, double aresta):
    _cor(cor), _nome(nome), _aresta(aresta) {}

Cubo::~Cubo(){}

std::string Cubo::get_cor(){
    return this->_cor;
}

std::string Cubo::get_nome(){
    return this->_nome;
}

double Cubo::get_volume(){
    return _aresta * _aresta * _aresta;
}
