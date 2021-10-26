#include <iostream>

using namespace std;

struct Imagem {
    int **pixels;
    int nrows;
    int ncolunms;
};

void leImagem (Imagem &im) {

    char p1[3];

    cin >> p1 >> im.ncolunms >> im.nrows;

    im.pixels = new int*[im.nrows];
    for (int i = 0; i < im.nrows; i++) {
        im.pixels[i] = new int[im.ncolunms];
    }

    for (int i = 0; i < im.nrows; i++) {
        for (int j = 0; j < im.ncolunms; j++) {
            cin >> im.pixels[i][j];
        }
    }

    return;
}

void inverteCorImagem (Imagem &im) {

    for (int i = 0; i < im.nrows; i++) {
        for (int j = 0; j < im.ncolunms; j++) {
            if (im.pixels[i][j] == 0) {
                im.pixels[i][j] = 1;
            }
            else {
                im.pixels[i][j] = 0;
            }
        }
    }

    return;
}

void imprimeImagem (Imagem &im) {

    cout << "P1" << endl << im.ncolunms << " " << im.nrows;
    for (int i = 0; i < im.nrows; i++) {
        cout << endl;
        for (int j = 0; j < im.ncolunms; j++) {
            cout << im.pixels[i][j];
        }
    }
    cout << endl;

    return;
}

void deletaImagem (Imagem &im) {

    for (int i = 0; i < im.nrows; i++) {
        delete im.pixels[i];
    }
    delete im.pixels;

    return;
}

int main (int argc, char **argv) {

    Imagem im;
    leImagem(im);
    inverteCorImagem(im);
    imprimeImagem(im);
    deletaImagem(im);
    return 0;
}
