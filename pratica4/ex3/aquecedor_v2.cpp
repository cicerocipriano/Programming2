#include "aquecedor_v2.h"
#include <iostream>

Aquecedor::Aquecedor() {
    _temperatura = 20.0;
    _temperatura_min = 10.0;
    _temperatura_max = 40.0;
    _fator_incremento = 5.0;
}

void Aquecedor::set_temp(double temperatura) {
    if (temperatura < _temperatura_min || temperatura > _temperatura_max)
        std::cout << "A temperatura deve estar entre " << _temperatura_min << " e " << _temperatura_max << std::endl;
    else
        _temperatura = temperatura;
}

void Aquecedor::set_fator(double fator) {
    _fator_incremento = fator;
}

void Aquecedor::set_temp_fator(double temperatura, double fator) {
    if (temperatura < _temperatura_min || temperatura > _temperatura_max)
        std::cout << "A temperatura deve estar entre " << _temperatura_min << " e " << _temperatura_max << std::endl;
    else
        _temperatura = temperatura;
    _fator_incremento = fator;
}

void Aquecedor::aquecer() {
    double aux = _temperatura + _fator_incremento;
    if (aux < _temperatura_min || aux > _temperatura_max)
        std::cout << "A temperatura deve estar entre " << _temperatura_min << " e " << _temperatura_max << std::endl;
    else
        _temperatura = aux;
}

void Aquecedor::resfriar() {
    double aux = _temperatura - _fator_incremento;
    if (aux < _temperatura_min || aux > _temperatura_max)
        std::cout << "A temperatura deve estar entre " << _temperatura_min << " e " << _temperatura_max << std::endl;
    else
        _temperatura = aux;
}

double Aquecedor::get_temperatura() {
    return _temperatura;
}

Aquecedor::~Aquecedor() {}
