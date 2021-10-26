#include <iostream>
#include "aluno.h"

int main(int argc, char **argv) {

    Aluno a;

    a.get_nome_aluno();
    a.get_matricula();
    a.adicionarNota();
    a.calculaMediaAluno(a._notas);
    a.imprimeInformacoesAluno();

    return 0;
}
