#include "excecaosoma.h"
#include "excecaoacimadex.h"
#include <iostream>
#include <vector>
#include <cstdlib>

void excecaoSoma::trata_excecao_x(double& x){
    char p0[101];
    bool tem_numero = false;

    while(tem_numero == false) {
        std::cin >> p0;

        for(int i = 0; p0[i] != '\0'; i++){
            if((p0[i] < '0' || p0[i] > '9') && p0[i] != '.'){
                try{
                    throw(ExcecaoAcimaDeX());
                }catch(ExcecaoAcimaDeX A){
                    A.outro_caractere();
                    break;
                }
            }

            if(p0[i + 1] == '\0'){
                x = atof(p0);

                if(x <= 0.0){
                    try{
                        throw(ExcecaoAcimaDeX());
                    }catch(ExcecaoAcimaDeX B){
                        B.numero_baixo();
                        break;
                    }
                }

                if(x > 100.0){
                    try{
                        throw(ExcecaoAcimaDeX());
                    }catch(ExcecaoAcimaDeX C){
                        C.x_muito_alto();
                        break;
                    }
                }

                tem_numero = true;
            }
        }
    }

    return;
}

void excecaoSoma::trata_excecao_num(double& num){
    char p0[101];
    bool tem_numero = false;

    while(tem_numero == false) {
        std::cin >> p0;

        for(int i = 0; p0[i] != '\0'; i++){
            if((p0[i] < '0' || p0[i] > '9') && p0[i] != '.'){
                try{
                    throw(ExcecaoAcimaDeX());
                }catch(ExcecaoAcimaDeX A){
                    A.outro_caractere();
                    break;
                }
            }

            if(p0[i + 1] == '\0'){
                num = atof(p0);

                if(num <= 0.0){
                    try{
                        throw(ExcecaoAcimaDeX());
                    }catch(ExcecaoAcimaDeX B){
                        B.numero_baixo();
                        break;
                    }
                }
                tem_numero = true;
            }
        }
    }

    return;
}

excecaoSoma::excecaoSoma(){
    _x = 0.0;
    _soma = 0.0;
    _somados = 0.0;
    _media = 0.0;
    double num, aux;

    trata_excecao_x(_x);

    while(true){
        trata_excecao_num(num);
        _numeros.push_back(num);

        aux = 0.0;
        for(int i = 0; i < _numeros.size(); i++)
            aux += _numeros[i];

        if(aux > _x){
            try{
                throw(ExcecaoAcimaDeX());
            }catch(ExcecaoAcimaDeX A){
                A.soma_muito_alta();
                break;
            }
        }
        else{
            _somados++;
            _soma = aux;
        }
    }

    std::cout << "Soma: " << _soma << std::endl << "Somados: " << _somados << std::endl;
    if(_somados == 0.0)
        std::cout << "Nao ha media." << std::endl;
    else{
        _media = _soma / _somados;
        std::cout << "Media: " << _media << std::endl;
    }
}

excecaoSoma::~excecaoSoma(){}
