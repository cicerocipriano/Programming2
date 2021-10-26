#include "aquecedor.h"

Aquecedor::Aquecedor() {
    _temperatura = 20.0;
}

void Aquecedor::aquecer() {
    _temperatura += 5.0;
}

void Aquecedor::resfriar() {
    _temperatura  -= 5.0;
}

double Aquecedor::get_temperatura() {
    return _temperatura;
}

Aquecedor::~Aquecedor() {}
