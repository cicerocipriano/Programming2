#include <iostream>

using namespace std;

void leiaInteiros1 (int &a, int &b) {

    cout << "Escreva dois inteiros:" << endl;
    cin >> a >> b;

    return;
}

void leiaInteiros2 (int *a, int *b) {

    cout << "Escreva dois inteiros:" << endl;
    cin >> *a >> *b;

    return;
}

int main(int argc, char **argv) {

    int m, n;
    int *o, *p;
    int a, b;
    o = &a;
    p = &b;

    leiaInteiros1(m,n);

    leiaInteiros2(o,p);

    cout << "Inteiros da funcao 1:" << endl << m << " " << n << endl;
    cout << "Inteiros da funcao 2:" << endl << *o << " " << *p << endl;

    return 0;
}
