#ifndef HORARIO_H
#define HORARIO_H

#include <iostream>

using namespace std;

class Horario{
    friend istream& operator>>(istream &input, Horario &h);
    friend ostream& operator<<(ostream &output, const Horario &h);
public:
    Horario(int h = 0, int m = 0, int s = 0);
    Horario(const Horario &hr);
    ~Horario();

    void set_hora(const int h);
    void set_minuto(const int m);
    void set_segundo(const int s);

    const int get_hora() const;
    const int get_minuto() const;
    const int get_segundo() const;

    const int compSegundos(const Horario& hms) const;
    const int difSegundos(const Horario& hms) const;

    void imprime() const;
private:
    int _hora, _minuto, _segundo;
};

#endif // HORARIO_H
