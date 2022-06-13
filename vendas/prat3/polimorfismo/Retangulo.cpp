
#include "Retangulo.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Retangulo::Retangulo(double x, double y, double largura, double altura,
                     int e, int c, int t) : FigBase(x, y, e, c, t) {
    setLargura(largura);
    setAltura(altura);
}

double Retangulo::getLargura() const {
    return largura;
}

void Retangulo::setLargura(double larg) {
    largura = larg;
}

double Retangulo::getAltura() const {
    return altura;
}

void Retangulo::setAltura(double alt) {
    altura = alt;
}

const float Retangulo::area() const {
    return altura * largura;
}

const float Retangulo::perimetro() const {
    return 2*(largura + altura);
}

void Retangulo::imprime() const {
    cout << " Atributos da linha: " << endl;
    cout << "     Espessura = " << this->getEspessura() << endl;
    cout << "     Cor       = " << this->getCor() << endl;
    cout << "     Tipo      = " << this->getTipo() << endl;
    cout << " x = " << this->getX() << " y = " << this->getY() << endl;
    cout << " largura = " << this->getLargura() << " altura = " << this->getAltura() << endl;
    cout << "area = " << this->area();
    cout << " perimetro = " << this->perimetro() << endl;

    return;
}

void Retangulo::ler(){
    double x,y;
    int e,c,t;

    cout << "x = ";
    cin >> x; setX(x);
    cout << "y = ";
    cin >> y; setY(y);
    cout << "largura = ";
    cin >> x; setLargura(x);
    cout << "altura = ";
    cin >> y; setAltura(y);
    cout << "Forneca os atributos da linha \n";
    cout << "    Espessura = ";
    cin >> e; setEspessura(e);
    cout << "    Tipo = ";
    cin >> t; setTipo(t);
    cout << "    Cor = ";
    cin >> c; setCor(c);

    return;
}

ostream& operator<< (ostream &output, const Retangulo &r){
    r.imprime();

    return output;
}

istream& operator>> (istream &input, Retangulo &r) {
    r.ler();

    return input;
}
