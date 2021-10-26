#ifndef QUADRADO_H
#define QUADRADO_H

#include <string>
#include "forma.h"
#include "forma2d.h"

class Quadrado: public Forma2D{
private:
    std::string _cor;
    std::string _nome;
    double _lado;
public:
    Quadrado(std::string cor, std::string nome, double lado);
    ~Quadrado();
    std::string get_nome();
    std::string get_cor();
    double get_area();
    double get_perimetro();
};

#endif // QUADRADO_H
