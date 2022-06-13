#include "FigBase.h"
#include "Segmento.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main(int argc, char **argv){
    FigBase* array[5];
    Circulo c1, c2;
    Retangulo r;
    Segmento s1, s2;

    array[0] = &c1;
    array[1] = &c2;
    array[2] = &r;
    array[3] = &s1;
    array[4] = &s2;

    for(int i = 0; i < 5; i++)
        cin >> *array[i];
    for(int i = 0; i < 5; i++)
        cout << *array[i];

    return 0;
}
