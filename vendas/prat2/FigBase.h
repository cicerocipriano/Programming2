#ifndef FIGBASE_H
#define FIGBASE_H

#include <iostream>

using namespace std;

class FigBase{
    friend istream& operator>>(istream&, FigBase&);
    friend ostream& operator<<(ostream&, const FigBase&);
public:
    FigBase();
    FigBase(double, double, int, int, int);
    ~FigBase();

    void set_x(const double);
    void set_y(const double);
    void set_espessura(const int);
    void set_cor(const int);
    void set_tipo(const int);

    const double get_x() const;
    const double get_y() const;
    const int get_espessura() const;
    const int get_cor() const;
    const int get_tipo() const;

    virtual void imprime() const;
private:
    double _x, _y;
    int _espessura, _cor, _tipo;
};

#endif // FIGBASE_H
