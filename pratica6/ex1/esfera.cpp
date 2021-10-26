#include <string>
#include "forma.h"
#include "forma3d.h"
#include "esfera.h"

Esfera::Esfera(std::string cor, std::string nome, double raio):
    _cor(cor), _nome(nome), _raio(raio) {}

Esfera::~Esfera(){}

std::string Esfera::get_cor(){
    return this->_cor;
}

std::string Esfera::get_nome(){
    return this->_nome;
}

double Esfera::get_volume(){
    return _raio * _raio * _raio * 3.1415 * 4.0 / 3.0;
}
