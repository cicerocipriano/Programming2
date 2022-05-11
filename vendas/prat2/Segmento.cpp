#include "Segmento.h"

using namespace std;

istream& operator>>(istream& input, Segmento& s){
    double d;
    int i;
    cin >> d;
    s.set_x(d);
    cin >> d;
    s.set_y(d);
    cin >> d;
    s.set_x2(d);
    cin >> d;
    s.set_y2(d);
    cin >> i;
    s.set_espessura(i);
    cin >> i;
    s.set_cor(i);
    cin >> i;
    s.set_tipo(i);

    return input;
}

ostream& operator<<(ostream& output, const Segmento& s){
    cout << "x: " << s.get_x() << " y: " << s.get_y();
    cout << " x2: " << s.get_x2() << " y2: " << s.get_y2();
    cout << " espessura: " << s.get_espessura() << " cor: " << s.get_cor() << " tipo: " << s.get_tipo();

    return output;
}

Segmento::Segmento():
    FigBase(){
    _x2 = 0.0;
    _y2 = 0.0;
}

Segmento::Segmento(double x, double y, double x2, double y2, int espessura, int cor, int tipo):
    FigBase(x,y,espessura,cor,tipo), _x2(x2), _y2(y2){}

Segmento::~Segmento(){}

void Segmento::set_x2(const double x){
    this->_x2 = x;

    return;
}

void Segmento::set_y2(const double y){
    this->_y2 = y;

    return;
}

const double Segmento::get_x2() const{
    return this->_x2;
}

const double Segmento::get_y2() const{
    return this->_y2;
}

const float Segmento::area() const{
    return 0.0;
}

const float Segmento::perimetro() const{
    return sqrt((get_x() - get_x2()) * (get_x() - get_x2()) + (get_y() - get_y2()) * (get_y() - get_y2()));
}

void Segmento::imprime() const{
    cout << "--- [Segmento] ---" << endl;
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << get_espessura() << endl;
    cout << "     Cor       = " << get_cor() << endl;
    cout << "     Tipo      = " << get_tipo() << endl;
    cout << " x = " << get_x() << " y = " << get_y() << endl;
    cout << " x2 = " << get_x2() << " y2 = " << get_y2() << endl;
    cout << " area = " << area() << " perimetro = " << perimetro() << endl;
}
