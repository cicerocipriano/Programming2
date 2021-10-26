#include <iostream>
#include <cstdlib>
#include <time.h>
#include "listavetorinteiros.h"

int main(int argc, char **argv) {

    srand(time(NULL));

    ListaVetorInteiros a;

    for (int i = 0; i < TAMANHO_INICIAL + 1; i++) {
        a.inserir_elemento(rand() % 10);
    }

    a.imprimir();

    a.remover_primeiro();

    a.imprimir();

    a.remover_ultimo();

    a.imprimir();

    a.inverte();

    a.imprimir();

    return 0;
}
