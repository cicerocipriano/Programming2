#include <iostream>

#include "inf112_estudante.h"
#include "inf112_pessoa.h"

void f(Pessoa &pessoa) {
    std::cout << "Na funcao: " << pessoa.defina_meu_tipo() << std::endl;
}

int main(int argc, char *argv[]) {

    Pessoa pessoa("Julio Reis");
    Estudante estudante("Jane Doe", 20180101, "INF112", 2021);

    std::cout << "A pessoa eh: " << pessoa.get_nome() << std::endl;
    std::cout << "O estudante eh: " << estudante.get_nome() << std::endl;

    std::cout << "A pessoa eh: " << pessoa.defina_meu_tipo() << std::endl;
    std::cout << "O estudante eh: " << estudante.defina_meu_tipo() << std::endl;

    std::cout << "Matricula do estudante: " << estudante.get_matricula() << std::endl;
    std::cout << "Codigo da aula: " << estudante.get_codigo() << std::endl;
    std::cout << "Ano: " << estudante.get_ano() << std::endl;

    estudante.set_codigo("MAT140");
    estudante.set_ano(2022);

    std::cout << "Codigo da aula: " << estudante.get_codigo() << std::endl;
    std::cout << "Ano: " << estudante.get_ano() << std::endl;

    f(pessoa);
    f(estudante);

    Pessoa &p2 = estudante;
    std::cout << p2.defina_meu_tipo() << std::endl;

    Estudante &e2 = dynamic_cast<Estudante&>(p2);
    std::cout << e2.defina_meu_tipo() << std::endl;

    Pessoa p3 = estudante;
    std::cout << p3.defina_meu_tipo() << std::endl;

    Pessoa *p4 = &estudante;
    std::cout << p4->defina_meu_tipo() << std::endl;

    Estudante *e3 = dynamic_cast<Estudante*>(p4);
    std::cout << e3->defina_meu_tipo() << std::endl;

    return 0;
}
