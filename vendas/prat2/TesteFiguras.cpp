#include <cstdlib>
#include <iostream>
#include "Circulo.h"
#include "Retangulo.h"

using namespace std;

int main(int argc, char **argv) {
    Circulo c1(100.0, 120.0, 30.0, 3, 2, 1);
    c1.imprime();

    Retangulo r1(40.0, 50.0, 80.0, 30.0, 1, 2, 3);
    r1.imprime();

    Circulo c2 = c1;
    c2.set_x(25);
    c2.set_y(17);
    c2.set_raio(25);
    c2.set_espessura(9); // utiliza um valor invalido
    c2.imprime();

    return 0;
}


/* --------------- RESULTADO ESPERADO -----------------------

--- [Circulo] ---
 Atributos da linha:
     Espessura = 3
     Cor       = 2
     Tipo      = 1
 x = 100 y = 120
 raio = 30
 area = 2827.43 perimetro = 188.496
--- [Retangulo] ---
 Atributos da linha:
     Espessura = 1
     Cor       = 2
     Tipo      = 3
 x = 40 y = 50
 largura = 80 altura = 30
 area = 2400 perimetro = 220
--- [Circulo] ---
 Atributos da linha:
     Espessura = 1
     Cor       = 2
     Tipo      = 1
 x = 25 y = 17
 raio = 25
 area = 1963.5 perimetro = 157.08

-------------------------------------------------------------*/
