
#include "Segmento.h"
#include <iostream>

using namespace std;

#include <math.h>

Segmento::Segmento(double x, double y, double x2, double y2,
                     int e, int c, int t) : FigBase(x, y, e, c, t) {
    setX2(x2);
    setY2(y2);
}

double Segmento::getX2() const {
    return x2;
}

void Segmento::setX2(double x2) {
    this->x2 = x2;
}

double Segmento::getY2() const {
    return y2;
}

void Segmento::setY2(double y2) {
    this->y2 = y2;
}

float const Segmento::area() const {
    return 0;
}

//Esse perimetro de um segmento nao faz muito sentido!
float const Segmento::perimetro() const {
    return sqrt((getX() - x2)*(getX() - x2) + (getY() - y2) * (getY() - y2));
}

void Segmento::imprime() const {
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << this->getEspessura() << endl;
    cout << "     Cor       = " << this->getCor() << endl;
    cout << "     Tipo      = " << this->getTipo() << endl;
    cout << " x = " << this->getX() << " y = " << this->getY() << endl;
    cout << " x2 = " << this->getX2() << " y2 = " << this->getY2() << endl;
    cout << "area = " << this->area();
    cout << " perimetro = " << this->perimetro() << endl;

    return;
}

void Segmento::ler(){
    double x,y;
    int e,c,t;

    cout << "x = ";
    cin >> x; setX(x);
    cout << "y = ";
    cin >> y; setY(y);
    cout << "x2 = ";
    cin >> x; setX2(x);
    cout << "y2 = ";
    cin >> y; setY2(y);
    cout << "Forneca os atributos da linha \n";
    cout << "    Espessura = ";
    cin >> e; setEspessura(e);
    cout << "    Tipo = ";
    cin >> t; setTipo(t);
    cout << "    Cor = ";
    cin >> c; setCor(c);

    return;
}

ostream& operator<<(ostream &output, const Segmento &s) {
    s.imprime();

    return output;
}

istream& operator>>(istream &input, Segmento &s) {
    s.ler();

    return input;
}
