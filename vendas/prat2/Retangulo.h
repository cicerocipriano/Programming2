#ifndef __Retangulo_h
#define __Retangulo_h

#include "FigBase.h"

using namespace std;

class Retangulo: public FigBase{
    friend istream& operator>>(istream&, Retangulo&);
    friend ostream& operator<<(ostream&, const Retangulo&);
public:
    Retangulo();
    Retangulo(double, double, double, double, int, int, int);
    ~Retangulo();

    void set_largura(const double);
    void set_altura(const double);

    const double get_largura() const;
    const double get_altura() const;

    const float area() const;
    const float perimetro() const;

    virtual void imprime() const;
private:
    double _largura, _altura;
};

#endif
