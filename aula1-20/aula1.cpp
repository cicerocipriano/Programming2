// implement various functions to get n squared

#include <iostream>

using namespace std;

int quadrado1 (int n) {

    return n * n;
}

int quadrado2 (int &n) {

    return n * n;
}

int quadrado3 (int *n) {

    return (*n) * (*n);
}

int main (int argc, char **argv) {

    int n;

    cout << "Write an integer: ";
    cin >> n;

    int a, b, *c = &n, d;

    a = quadrado1(n);

    b = quadrado2(n);

    d = quadrado3(c);

    cout << a << " " << b << " " << d << endl;

    return 0;
}
