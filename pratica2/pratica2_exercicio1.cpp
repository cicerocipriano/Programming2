#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void preencheAleatorios (int *a, int n) {

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10;
    }

    return;
}

void imprime (int *a, int n) {

    for (int i = 0; i < n; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;

    return;
}

void contaParImpar (int *a, int *b, int n, int &par, int &impar) {

    for (int i = 0; i < n; i++) {
        if ((a[i] + b[i]) % 2 == 0) {
            par++;
        }
        else {
            impar++;
        }
    }

    return;
}

int main(int argc, char **argv) {

    srand(time(NULL));

    int n = 1;

    while (n > 0) {
        cout << "Digite a quantidade de jogadas a simular: ";
        cin >> n;
        if (n < 1) {
            break;
        }
        int par = 0, impar = 0;
        int *a, *b;
        a = new int[n];
        b = new int[n];
        preencheAleatorios(a,n);
        preencheAleatorios(b,n);
        imprime(a,n);
        imprime(b,n);
        contaParImpar(a,b,n,par,impar);
        cout << "Par: " << par << endl;
        cout << "Impar: " << impar << endl;
        delete a;
        delete b;
    }

    return 0;
}
