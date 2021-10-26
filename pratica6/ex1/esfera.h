#ifndef ESFERA_H
#define ESFERA_H

#include <string>
#include "forma.h"
#include "forma3d.h"

class Esfera: public Forma3D{
private:
    std::string _cor;
    std::string _nome;
    double _raio;
public:
    Esfera(std::string cor, std::string nome, double raio);
    ~Esfera();
    std::string get_cor();
    std::string get_nome();
    double get_volume();
};

#endif // ESFERA_H
