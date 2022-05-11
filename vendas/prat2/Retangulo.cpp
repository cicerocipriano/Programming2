
#include "Retangulo.h"

using namespace std;

istream& operator>>(istream& input, Retangulo& r){
    double d;
    int i;
    cin >> d;
    r.set_x(d);
    cin >> d;
    r.set_y(d);
    cin >> d;
    r.set_largura(d);
    cin >> d;
    r.set_altura(d);
    cin >> i;
    r.set_espessura(i);
    cin >> i;
    r.set_cor(i);
    cin >> i;
    r.set_tipo(i);

    return input;
}

ostream& operator<<(ostream& output, const Retangulo& r){
    cout << "x: " << r.get_x() << " y: " << r.get_y();
    cout << " largura: " << r.get_largura() << " altura: " << r.get_altura();
    cout << " espessura: " << r.get_espessura() << " cor: " << r.get_cor() << " tipo: " << r.get_tipo();

    return output;
}

Retangulo::Retangulo():
    FigBase(){
    _largura = 1.0;
    _altura = 1.0;
}

Retangulo::Retangulo(double x, double y, double largura, double altura, int espessura, int cor, int tipo):
    FigBase(x,y,espessura,cor,tipo), _largura(largura), _altura(altura){}

Retangulo::~Retangulo(){}

void Retangulo::set_largura(const double l){
    this->_largura = l;

    return;
}

void Retangulo::set_altura(const double a){
    this->_altura = a;

    return;
}

const double Retangulo::get_largura() const{
    return this->_largura;
}

const double Retangulo::get_altura() const{
    return this->_altura;
}

const float Retangulo::area() const{
    return _altura * _largura;
}

const float Retangulo::perimetro() const{
    return 2.0 * (_largura + _altura);
}

void Retangulo::imprime() const {
    cout << "--- [Retangulo] ---" << endl;
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << get_espessura() << endl;
    cout << "     Cor       = " << get_cor() << endl;
    cout << "     Tipo      = " << get_tipo() << endl;
    cout << " x = " << get_x() << " y = " << get_y() << endl;
    cout << " largura = " << get_largura() << " altura = " << get_altura() << endl;
    cout << " area = " << area() << " perimetro = " << perimetro() << endl;
}
