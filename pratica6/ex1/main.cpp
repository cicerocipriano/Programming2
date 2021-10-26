#include <string>
#include <iostream>
#include "forma.h"
#include "forma2d.h"
#include "forma3d.h"
#include "quadrado.h"
#include "circulo.h"
#include "triangulo.h"
#include "esfera.h"
#include "cubo.h"

int main(int argc, char **argv) {
    Quadrado a("vermelho","quadrado",5.0);
    Circulo b("verde","circulo",10.0);
    Triangulo c("roxo","triangulo",3.0,4.0,5.0,4.0);
    Esfera d("preto","esfera",11.0);
    Cubo e("azul","cubo",3.0);

    std::cout << a.get_cor() << " " << a.get_nome() << " " << a.get_area() << " " << a.get_perimetro() << std::endl;
    std::cout << b.get_cor() << " " << b.get_nome() << " " << b.get_area() << " " << b.get_perimetro() << std::endl;
    std::cout << c.get_cor() << " " << c.get_nome() << " " << c.get_area() << " " << c.get_perimetro() << std::endl;
    std::cout << d.get_cor() << " " << d.get_nome() << " " << d.get_volume() << std::endl;
    std::cout << e.get_cor() << " " << e.get_nome() << " " << e.get_volume() << std::endl;

    return 0;
}
