#include <iostream>

using namespace std;

class Base {
public:
    virtual void metodo() = 0;
};

class Derivada: public Base{
public:
    void metodo() override {
        cout << 100;
    }
};

int main(int argc, char *argv[])
{
    Base base;
    base.metodo();

    Derivada derivada;
    derivada.metodo();

    return 0;
}
