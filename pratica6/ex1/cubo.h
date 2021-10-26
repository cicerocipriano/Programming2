#ifndef CUBO_H
#define CUBO_H

#include <string>
#include "forma.h"
#include "forma3d.h"

class Cubo: public Forma3D{
private:
    std::string _cor;
    std::string _nome;
    double _aresta;
public:
    Cubo(std::string cor, std::string nome, double aresta);
    ~Cubo();
    std::string get_cor();
    std::string get_nome();
    double get_volume();
};

#endif // CUBO_H
