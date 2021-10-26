#include <iostream>
#include "../include/soma.h"
#include "../include/power.h"
#include "../include/mdc.h"

int main(int argc, char **argv) {

    int m,n;
    std::cout << "Digite m: ";
    std::cin >> m;
    std::cout << "Digite n: ";
    std::cin >> n;
    Soma a;
    a.somar(m,n);

    int o,p;
    std::cout << "Digite k: ";
    std::cin >> o;
    std::cout << "Digite n: ";
    std::cin >> p;
    Power b;
    b.elevar(o,p);

    Mdc c;
    c.achar_mdc();

    return 0;
}
