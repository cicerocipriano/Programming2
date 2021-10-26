#include <iostream>

using namespace std;

int calculaTamanhoString1 (char *str) {

    int aux1 = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        aux1++;
    }

    return aux1;
}

int calculaTamanhoString2 (char *str) {

    int aux2 = 0;

    for (int i = 0; *(str + i); i++) {
        aux2++;
    }

    return aux2;
}

int calculaTamanhoString3 (char *str) {

    char *i;

    for (i = str; *i != '\0'; i++) {}

    return (i - str) / sizeof(char);
}

int main(int argc, char **argv) {

    char str[51];

    cout << "Digite alguma string... (com ate 50 caracteres): ";
    cin.getline(str,50);
    cout << "Tamanhos calculados:" << endl;
    cout << calculaTamanhoString1(str) << " " << calculaTamanhoString2(str) << " " << calculaTamanhoString3(str);
    cout << endl;

    return 0;
}
