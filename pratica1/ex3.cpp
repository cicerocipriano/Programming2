#include <iostream>

using namespace std;

struct Jogador {
    int pontos;
    int x, y;
};

void leDadosJogador (Jogador *a) {

    cout << endl << "Escreva a pontuacao do jogador: ";
    cin >> a->pontos;
    cout << "Escreva a posicao do jogador (coordenadas x e y)" << endl;
    cin >> a->x >> a->y;

    return;
}

int main(int argc, char **argv) {

    Jogador a[5];

    for (int i = 0; i < 5; i++) {
        leDadosJogador(&a[i]);
    }

    for (int i = 0; i < 5; i++) {
        cout << endl << "Jogador " << i + 1 << ":" << endl;
        cout << "Pontos: " << a[i].pontos << endl;
        cout << "Coordenadas: x = " << a[i].x << ", y = " << a[i].y << endl;
    }

    return 0;
}
