#include "Horario.h"

istream& operator>>(istream &input, Horario &h){
    int i;
    cin >> i;
    h.set_hora(i);
    cin >> i;
    h.set_minuto(i);
    cin >> i;
    h.set_segundo(i);

    return input;
}

ostream& operator<<(ostream &output, const Horario &h){
    cout << h.get_hora() << ":" << h.get_minuto() << ":" << h.get_segundo();

    return output;
}

Horario::Horario(int h, int m, int s){
    set_hora(h);
    set_minuto(m);
    set_segundo(s);
}

Horario::Horario(const Horario& hr):
    _hora(hr.get_hora()), _minuto(hr.get_minuto()), _segundo(hr.get_segundo())
{}

Horario::~Horario(){}

void Horario::set_hora(const int h){
    if(h < 0)
        _hora = 0;
    else if(h > 23)
        _hora = 23;
    else
        _hora = h;

    return;
}

void Horario::set_minuto(const int m){
    if(m < 0)
        _minuto = 0;
    else if(m > 59)
        _minuto = 59;
    else
        _minuto = m;

    return;
}

void Horario::set_segundo(const int s){
    if(s < 0)
        _segundo = 0;
    else if(s > 59)
        _segundo = 59;
    else
        _segundo = s;

    return;
}

const int Horario::get_hora() const{
    return this->_hora;
}

const int Horario::get_minuto() const{
    return this->_minuto;
}

const int Horario::get_segundo() const{
    return this->_segundo;
}

const int Horario::compSegundos(const Horario& hms) const{
    if(_hora > hms.get_hora())
        return 1;
    else if(_hora < hms.get_hora())
        return -1;
    else if(_hora == hms.get_hora() && _minuto > hms.get_minuto())
        return 1;
    else if(_hora == hms.get_hora() && _minuto < hms.get_minuto())
        return -1;
    else if(_hora == hms.get_hora() && _minuto == hms.get_minuto() && _segundo > hms.get_segundo())
        return 1;
    else if(_hora == hms.get_hora() && _minuto == hms.get_minuto() && _segundo < hms.get_segundo())
        return -1;
    else
        return 0;
}

const int Horario::difSegundos(const Horario& hms) const{
    int segundos_this = _hora * 3600 + _minuto * 60 + _segundo;
    int segundos_other = hms.get_hora() * 3600 + hms.get_minuto() * 60 + hms.get_segundo();

    return segundos_this - segundos_other;
}

void Horario::imprime() const{
    cout << _hora << ":" << _minuto << ":" << _segundo;

    return;
}
