#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class Data{
    friend istream& operator>>(istream &input, Data &d);
    friend ostream& operator<<(ostream &output, const Data &d);
public:
    Data(int d = 1, int m = 1, int a = 2018);
    Data(const Data& dt);
    ~Data();

    void set_dia(const int d);
    void set_mes(const int m);
    void set_ano(const int a);

    const int get_dia() const;
    const int get_mes() const;
    const int get_ano() const;

    const int compData(const Data& dma) const;
    const int difDias(const Data& dma) const;

    void imprime() const;
private:
    int _dia, _mes, _ano;
};

#endif // DATA_H
