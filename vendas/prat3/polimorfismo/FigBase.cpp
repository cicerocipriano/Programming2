
#include "FigBase.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

FigBase::FigBase(double x, double y, int e, int c, int t) {
    setX(x);
    setY(y);
    setEspessura(e);
    setCor(c);
    setTipo(t);
}

double FigBase::getX() const {
    return x;
}

void FigBase::setX(double x) {
    this->x = x;
}

double FigBase::getY() const {
    return y;
}

void FigBase::setY(double y) {
    this->y = y;
}

int FigBase::getEspessura() const {
    return espessura;
}

void FigBase::setEspessura(int esp) {
    espessura = (esp < 1 || esp > 5) ? 1 : esp;
}

int FigBase::getCor() const {
    return cor;
}

void FigBase::setCor(int c) {
    cor = (c < 1 || c > 5) ? 1 : c;
}

int FigBase::getTipo() const {
    return tipo;
}

void FigBase::setTipo(int t) {
    tipo = (t < 1 || t > 3) ? 1 : t;;
}

void FigBase::imprime() const {
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << this->getEspessura() << endl;
    cout << "     Cor       = " << this->getCor() << endl;
    cout << "     Tipo      = " << this->getTipo() << endl;
    cout << " x = " << this->getX() << " y = " << this->getY() << endl;
    cout << "area = " << this->area();
    cout << " perimetro = " << this->perimetro() << endl;

    return;
}

const float FigBase::area() const{
    return 0.0;
}

const float FigBase::perimetro() const{
    return 0.0;
}

void FigBase::ler() {
    double x,y;
    int e,c,t;

    cout << "x = ";
    cin >> x; setX(x);
    cout << "y = ";
    cin >> y; setY(y);
    cout << "Forneca os atributos da linha \n";
    cout << "    Espessura = ";
    cin >> e; setEspessura(e);
    cout << "    Tipo = ";
    cin >> t; setTipo(t);
    cout << "    Cor = ";
    cin >> c; setCor(c);

    return;
}

ostream& operator<<(ostream &output, const FigBase &f) {
    f.imprime();

    return output;
}

istream& operator>>(istream &input, FigBase &f) {
    f.ler();

    return input;
}

