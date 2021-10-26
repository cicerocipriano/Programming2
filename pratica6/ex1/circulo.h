#ifndef CIRCULO_H
#define CIRCULO_H

#include <string>
#include "forma.h"
#include "forma2d.h"

class Circulo: public Forma2D{
private:
    std::string _cor;
    std::string _nome;
    double _raio;
public:
    Circulo(std::string cor, std::string nome, double raio);
    ~Circulo();
    std::string get_cor();
    std::string get_nome();
    double get_area();
    double get_perimetro();
};

#endif // CIRCULO_H
