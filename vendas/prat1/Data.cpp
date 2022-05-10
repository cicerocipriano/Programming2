#include "Data.h"

using namespace std;

istream& operator>>(istream &input, Data &d){
    int i;
    cin >> i;
    d.set_dia(i);
    cin >> i;
    d.set_mes(i);
    cin >> i;
    d.set_ano(i);

    return input;
}

ostream& operator<<(ostream &output, const Data &d){
    cout << d.get_dia() << "/" << d.get_mes() << "/" << d.get_ano();

    return output;
}

Data::Data(int d, int m, int a){
    set_dia(d);
    set_mes(m);
    set_ano(a);
}

Data::Data(const Data& dt):
    _dia(dt.get_dia()), _mes(dt.get_mes()), _ano(dt.get_ano())
{}

Data::~Data(){}

void Data::set_dia(const int d){
    if(d < 1)
        _dia = 1;
    else if(d > 30)
        _dia = 30;
    else
        _dia = d;

    return;
}

void Data::set_mes(const int m){
    if(m < 1)
        _mes = 1;
    else if(m > 12)
        _mes = 12;
    else
        _mes = m;

    return;
}

void Data::set_ano(const int a){
    if(a < 2018)
        _ano = 2018;
    else if(a > 2020)
        _ano = 2020;
    else
        _ano = a;

    return;
}

const int Data::get_dia() const{
    return this->_dia;
}

const int Data::get_mes() const{
    return this->_mes;
}

const int Data::get_ano() const{
    return this->_ano;
}

const int Data::compData(const Data& dma) const{
    if(_ano > dma.get_ano())
        return 1;
    else if(_ano < dma.get_ano())
        return -1;
    else if(_ano == dma.get_ano() && _mes > dma.get_mes())
        return 1;
    else if(_ano == dma.get_ano() && _mes < dma.get_mes())
        return -1;
    else if(_ano == dma.get_ano() && _mes == dma.get_mes() && _dia > dma.get_dia())
        return 1;
    else if(_ano == dma.get_ano() && _mes == dma.get_mes() && _dia < dma.get_dia())
        return -1;
    else
        return 0;
}

const int Data::difDias(const Data& dma) const{
    int dias_this = _ano * 360 + _mes * 30 + _dia;
    int dias_other = dma.get_ano() * 360 + dma.get_mes() * 30 + dma.get_dia();

    return dias_this - dias_other;
}

void Data::imprime() const{
    cout << _dia << "/" << _mes << "/" << _ano;

    return;
}
