#include "posicoesvetor.h"
#include "excecaoex2.h"
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void PosicoesVetor::trata_excecao_y(int &y){
    char p0[101];
    bool tem_numero = false;

    while(tem_numero == false) {
        cin >> p0;

        for(int i = 0; p0[i] != '\0'; i++){
            if(p0[i] < '0' || p0[i] > '9'){
                try{
                    throw(excecaoEx2());
                }catch(excecaoEx2 A){
                    A.outro_caractere_nat();
                    break;
                }
            }

            if(p0[i + 1] == '\0'){
                y = atoi(p0);

                if(y <= 0){
                    try{
                        throw(excecaoEx2());
                    }catch(excecaoEx2 B){
                        B.tamanho_invalido();
                        break;
                    }
                }

                tem_numero = true;
            }
        }
    }

    return;
}

void PosicoesVetor::trata_excecao_aux(int &aux){
    char p0[101];
    bool tem_numero = false;

    while(tem_numero == false) {
        cin >> p0;

        if(p0[0] == '-'){
            for(int i = 1; p0[i] != '\0'; i++){
                if(p0[i] < '0' || p0[i] > '9'){
                    try{
                        throw(excecaoEx2());
                    }catch(excecaoEx2 A){
                        A.outro_caractere_int();
                        break;
                    }
                }

                if(p0[i + 1] == '\0'){
                    aux = atoi(p0);
                    tem_numero = true;
                }
            }
        }
        else{
            for(int i = 0; p0[i] != '\0'; i++){
                if(p0[i] < '0' || p0[i] > '9'){
                    try{
                        throw(excecaoEx2());
                    }catch(excecaoEx2 A){
                        A.outro_caractere_int();
                        break;
                    }
                }

                if(p0[i + 1] == '\0'){
                    aux = atoi(p0);
                    tem_numero = true;
                }
            }
        }
    }

    return;
}

void PosicoesVetor::trata_excecao_pos(int &pos, int y){
    char p0[101];
    bool tem_numero = false;

    while(tem_numero == false) {
        cin >> p0;

        for(int i = 0; p0[i] != '\0'; i++){
            if(p0[i] < '0' || p0[i] > '9'){
                try{
                    throw(excecaoEx2());
                }catch(excecaoEx2 A){
                    A.outro_caractere_nat();
                    break;
                }
            }

            if(p0[i + 1] == '\0'){
                pos = atoi(p0);

                if(pos < 0 || pos >= y){
                    try{
                        throw(excecaoEx2());
                    }catch(excecaoEx2 B){
                        B.posicao_invalida();
                        break;
                    }
                }

                int aux = 0;
                bool pos_rep = false;

                for(auto i : _posicoes){
                    if(pos == _posicoes[i]){
                        pos_rep = true;
                        break;
                    }
                }
                if(pos_rep == true){
                    try{
                        throw(excecaoEx2());
                    }catch(excecaoEx2 C){
                        C.posicao_repetida();
                        break;
                    }
                }

                tem_numero = true;
            }
        }
    }

    return;
}

PosicoesVetor::PosicoesVetor(){
    _y = 0;
    cout << "Escreva o tamanho do vetor: ";
    trata_excecao_y(_y);
    _vetor = new int[_y];
    int pos, aux;

    for(int i = 0; i < _y; i++){
        cout << "Escreva o inteiro que sera inserido: ";
        trata_excecao_aux(aux);
        cout << "Escreva a posicao onde o inteiro sera inserido: ";
        trata_excecao_pos(pos,_y);
        _vetor[pos] = aux;
        _posicoes.push_back(pos);
    }

    cout << endl;
    for(int i = 0; i < _y; i++){
        cout << _vetor[i] << " ";
    }
    cout << endl;
}

PosicoesVetor::~PosicoesVetor(){
    delete []_vetor;
}
