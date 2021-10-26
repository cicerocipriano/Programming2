#include <iostream>
#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"

int main(int argc, char *argv[]) {

    Package p1("Arroz","Estrada da Vitoria",5,1);
    TwoDayPackage p2 ("Rapadura","Estrada da Vitoria",1,1,3);
    OvernightPackage p3 ("Leite","Estrada da Vitoria",2,1,2);

    std::cout << "Preco de p1: " << p1.calculateCost() << std::endl;
    std::cout << "Preco de p2: " << p2.calculateCost() << std::endl;
    std::cout << "Preco de p3: " << p3.calculateCost() << std::endl;

    return 0;
}
