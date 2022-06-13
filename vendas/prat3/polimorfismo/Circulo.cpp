
#include "Circulo.h"
#include <iostream>

using namespace std;

const float PI = 3.141592653589;

Circulo::Circulo(double x, double y, double raio,
                 int e, int c, int t) : FigBase(x, y, e, c, t) {
    setRaio(raio);
}

double Circulo::getRaio() const {
    return raio;
}

void Circulo::setRaio(double r) {
    raio = r;
}

const float Circulo::area() const {
    return PI * raio * raio;
}

const float Circulo::perimetro() const {
    return 2 * PI * raio;
}

void Circulo::imprime() const {
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << this->getEspessura() << endl;
    cout << "     Cor       = " << this->getCor() << endl;
    cout << "     Tipo      = " << this->getTipo() << endl;
    cout << " x = " << this->getX() << " y = " << this->getY() << endl;
    cout << " raio = " << this->getRaio() << endl;
    cout << "area = " << this->area();
    cout << " perimetro = " << this->perimetro() << endl;

    return;
}

void Circulo::ler(){
    double x,y;
    int e,c,t;

    cout << "x = ";
    cin >> x; setX(x);
    cout << "y = ";
    cin >> y; setY(y);
    cout << "raio = ";
    cin >> x; setRaio(x);
    cout << "Forneca os atributos da linha \n";
    cout << "    Espessura = ";
    cin >> e; setEspessura(e);
    cout << "    Tipo = ";
    cin >> t; setTipo(t);
    cout << "    Cor = ";
    cin >> c; setCor(c);

    return;
}

ostream& operator<< (ostream &output, const Circulo &r){
    r.imprime();

    return output;
}

istream& operator>> (istream &input, Circulo &r) {
    r.ler();

    return input;
}
