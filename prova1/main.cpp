#include "conta.h"
#include "contacorrente.h"
#include "contapoupanca.h"
#include <string>
#include <iostream>

int main(int argc, char *argv[]) {

    ContaCorrente conta1("Cicero","123.456.789-01",1000.0);
    ContaPoupanca conta2("Cicero","123456789-01",100.0);
    ContaPoupanca conta3("Jane Doe","987.654.321-09",10000);

    std::cout << "Saldo da conta corrente: " << conta1.get_saldo() << std::endl;
    std::cout << "saldo da conta poupanca 1: " << conta2.get_saldo() << std::endl;
    std::cout << "saldo da conta poupanca 2: " << conta3.get_saldo() << std::endl;

    conta2.muda_rendimento(0.1);

    std::cout << "saldo da conta poupanca 1: " << conta2.get_saldo() << std::endl;
    std::cout << "saldo da conta poupanca 2: " << conta3.get_saldo() << std::endl;

    return 0;
}
