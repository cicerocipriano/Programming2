#include <iostream>
#include <iomanip>
#include "data.h"

Data::Data() {
  _dia = 1;
  _mes = 1;
  _ano = 1970;
}

void Data::ler_data(int dia, int mes, int ano) {
    _dia = dia;
    _mes = mes;
    _ano = ano;
}

void Data::imprimir_numeros() {
    std::cout << std::setfill('0') << std::setw(2) << _dia;
    std::cout << "/";
    std::cout << std::setfill('0') << std::setw(2) << _mes;
    std::cout << "/" << _ano << std::endl;
}

void Data::imprimir_extenso() {
    char meses[12][10] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho",
                          "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    std::cout << _dia << " de " << meses[_mes-1] << " de " << _ano << std::endl;
}

int Data::GetDataEmSegundos(Data a) {
    int dias = 0;
    int anos = 1970;
    while (anos < a._ano) {
        if (anos % 100 == 0) {
            if (anos % 400 == 0) {
                dias += 366;
                anos++;
                continue;
            }
            else {
                dias += 365;
                anos++;
                continue;
            }
        }
        if (anos % 4 == 0) {
            dias += 366;
            anos++;
            continue;
        }
        dias += 365;
        anos++;
    }
    if (anos % 100 == 0) {
        if (anos % 400 == 0) {
            if (a._mes == 2)
                dias += 31;
            else if (a._mes == 3)
                dias += 60;
            else if (a._mes == 4)
                dias += 91;
            else if (a._mes == 5)
                dias += 121;
            else if (a._mes == 6)
                dias += 152;
            else if (a._mes == 7)
                dias += 182;
            else if (a._mes == 8)
                dias += 213;
            else if (a._mes == 9)
                dias += 244;
            else if (a._mes == 10)
                dias += 274;
            else if (a._mes == 11)
                dias += 305;
            else if (a._mes == 12)
                dias += 335;
            dias += a._dia;
            int segundos = dias*86400-75600;
            return segundos;
        }
        else {
            if (a._mes == 2)
                dias += 31;
            else if (a._mes == 3)
                dias += 59;
            else if (a._mes == 4)
                dias += 90;
            else if (a._mes == 5)
                dias += 120;
            else if (a._mes == 6)
                dias += 151;
            else if (a._mes == 7)
                dias += 181;
            else if (a._mes == 8)
                dias += 212;
            else if (a._mes == 9)
                dias += 243;
            else if (a._mes == 10)
                dias += 273;
            else if (a._mes == 11)
                dias += 304;
            else if (a._mes == 12)
                dias += 334;
            dias += a._dia;
            int segundos = dias*86400-75600;
            return segundos;
        }
    }
    if (anos % 4 == 0) {
        if (a._mes == 2)
            dias += 31;
        else if (a._mes == 3)
            dias += 60;
        else if (a._mes == 4)
            dias += 91;
        else if (a._mes == 5)
            dias += 121;
        else if (a._mes == 6)
            dias += 152;
        else if (a._mes == 7)
            dias += 182;
        else if (a._mes == 8)
            dias += 213;
        else if (a._mes == 9)
            dias += 244;
        else if (a._mes == 10)
            dias += 274;
        else if (a._mes == 11)
            dias += 305;
        else if (a._mes == 12)
            dias += 335;
        dias += a._dia;
        int segundos = dias*86400-75600;
        return segundos;
    }
    if (a._mes == 2)
        dias += 31;
    else if (a._mes == 3)
        dias += 59;
    else if (a._mes == 4)
        dias += 90;
    else if (a._mes == 5)
        dias += 120;
    else if (a._mes == 6)
        dias += 151;
    else if (a._mes == 7)
        dias += 181;
    else if (a._mes == 8)
        dias += 212;
    else if (a._mes == 9)
        dias += 243;
    else if (a._mes == 10)
        dias += 273;
    else if (a._mes == 11)
        dias += 304;
    else if (a._mes == 12)
        dias += 334;
    dias += a._dia;
    int segundos = dias*86400-75600;
    return segundos;
}

Data::~Data () {}
