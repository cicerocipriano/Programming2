#include "FigBase.h"

using namespace std;

istream& operator>>(istream& input, FigBase &f){
    double d;
    cin >> d;
    f.set_x(d);
    cin >> d;
    f.set_y(d);
    int i;
    cin >> i;
    f.set_espessura(i);
    cin >> i;
    f.set_cor(i);
    cin >> i;
    f.set_tipo(i);

    return input;
}

ostream& operator>>(ostream& output, const FigBase &f){
    cout << "x: " << f.get_x() << " y: " << f.get_y() << " espessura: " << f.get_espessura() << " cor: " << f.get_cor() << " tipo: " << f.get_tipo();

    return output;
}

FigBase::FigBase(){
    _x = 0.0;
    _y = 0.0;
    _espessura = 0;
    _cor = 0;
    _tipo = 0;
}

FigBase::FigBase(double x, double y, int espessura, int cor, int tipo):
    _x(x), _y(y){
    set_espessura(espessura);
    set_cor(cor);
    set_tipo(tipo);
}

FigBase::~FigBase(){}

void FigBase::set_x(const double x){
    this->_x = x;

    return;
}

void FigBase::set_y(const double y){
    this->_y = y;

    return;
}

void FigBase::set_espessura(const int e){
    this->_espessura = (e < 1 || e > 5) ? 1 : e;

    return;
}

void FigBase::set_cor(const int c){
    this->_cor = (c < 1 || c > 5) ? 1 : c;

    return;
}

void FigBase::set_tipo(const int t){
    this->_tipo = (t < 1 || t > 3) ? 1 : t;

    return;
}

const double FigBase::get_x() const{
    return this->_x;
}

const double FigBase::get_y() const{
    return this->_y;
}

const int FigBase::get_espessura() const{
    return this->_espessura;
}

const int FigBase::get_cor() const{
    return this->_cor;
}

const int FigBase::get_tipo() const{
    return this->_tipo;
}

void FigBase::imprime() const{
    cout << "--- [Figura] ---" << endl;
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << get_espessura() << endl;
    cout << "     Cor       = " << get_cor() << endl;
    cout << "     Tipo      = " << get_tipo() << endl;
    cout << " x = " << get_x() << " y = " << get_y() << endl;

    return;
}
