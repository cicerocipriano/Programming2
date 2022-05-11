#ifndef SEGMENTO_H
#define SEGMENTO_H

#include <cmath>
#include "FigBase.h"

using namespace std;

class Segmento : public FigBase{
    friend istream& operator>>(istream&, Segmento&);
    friend ostream& operator<<(ostream&, const Segmento&);
public:
    Segmento();
    Segmento(double, double, double, double, int, int, int);
    ~Segmento();

    void set_x2(const double);
    void set_y2(const double);

    const double get_x2() const;
    const double get_y2() const;

    const float area() const;
    const float perimetro() const;

    virtual void imprime() const;
private:
    double _x2, _y2;
};

#endif // SEGMENTO_H
