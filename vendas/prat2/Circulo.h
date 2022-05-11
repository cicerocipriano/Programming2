#ifndef __Circulo_h
#define __Circulo_h

#include "FigBase.h"

using namespace std;

class Circulo: public FigBase{
    friend istream& operator>>(istream&, Circulo&);
    friend ostream& operator<<(ostream&, const Circulo&);
public:
    Circulo();
    Circulo(double, double, double, int, int, int = 1);
    ~Circulo();

    void set_raio(const double);

    const double get_raio() const;

    const float area() const;
    const float perimetro() const;

    virtual void imprime() const;
private:
    double _raio;
};

#endif
