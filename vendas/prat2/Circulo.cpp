#include "Circulo.h"

using namespace std;

const float PI = 3.141592653589;

istream& operator>>(istream& input, Circulo& c){
    double d;
    int i;
    cin >> d;
    c.set_x(d);
    cin >> d;
    c.set_y(d);
    cin >> d;
    c.set_raio(d);
    cin >> i;
    c.set_espessura(i);
    cin >> i;
    c.set_cor(i);
    cin >> i;
    c.set_tipo(i);

    return input;
}

ostream& operator<<(ostream& output, const Circulo& c){
    cout << "x: " << c.get_x() << " y: " << c.get_y();
    cout << " raio: " << c.get_raio();
    cout << " espessura: " << c.get_espessura() << " cor: " << c.get_cor() << " tipo: " << c.get_tipo();

    return output;
}

Circulo::Circulo():
    FigBase(){
    _raio = 1.0;
}

Circulo::Circulo(double x, double y, double raio, int espessura, int cor, int tipo):
    FigBase(x,y,espessura,cor,tipo), _raio(raio){}

Circulo::~Circulo(){}

void Circulo::set_raio(const double r){
    this->_raio = r;

    return;
}

const double Circulo::get_raio() const{
    return this->_raio;
}

const float Circulo::area() const{
    return PI * _raio * _raio;
}

const float Circulo::perimetro() const{
    return 2.0 * PI * _raio;
}

void Circulo::imprime() const {
    cout << "--- [Circulo] ---" << endl;
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << get_espessura() << endl;
    cout << "     Cor       = " << get_cor() << endl;
    cout << "     Tipo      = " << get_tipo() << endl;
    cout << " x = " << get_x() << " y = " << get_y() << endl;
    cout << " raio = " << get_raio() << endl;
    cout << " area = " << area() << " perimetro = " << perimetro() << endl; 
}
