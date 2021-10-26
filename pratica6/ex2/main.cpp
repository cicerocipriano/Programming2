#include <iostream>
#include <string>
#include "produto.h"
#include "remedio.h"
#include "artigohigiene.h"

int main(int argc, char **argv) {

    Remedio a(123456,"dipirona",10.0,0.3,2.0), b(654321,"aspirina",20.0,0.5,5.0);
    ArtigoHigiene c(7890,"lenco",5.0,0.1), d(9876,"papel higienico",15.0,1.0);

    std::cout << a.gerarPrecoDeVenda() << std::endl << b.gerarPrecoDeVenda() << std::endl << c.gerarPrecoDeVenda() << std::endl << d.gerarPrecoDeVenda() << std::endl;

    return 0;
}
