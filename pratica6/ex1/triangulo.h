#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <string>
#include "forma.h"
#include "forma2d.h"

class Triangulo: public Forma2D{
private:
    std::string _cor;
    std::string _nome;
    double _lado1;
    double _lado2;
    double _lado3;
    double _altura_relativa_ao_lado1;
public:
    Triangulo(std::string cor, std::string nome, double lado1, double lado2, double lado3, double altura_relativa_ao_lado1);
    ~Triangulo();
    std::string get_cor();
    std::string get_nome();
    double get_area();
    double get_perimetro();
};

#endif // TRIANGULO_H
