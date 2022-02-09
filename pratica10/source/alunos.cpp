#include "../include/alunos.h"

using namespace std;

//construtores
Alunos::Alunos(int matricula, string nome, double nota1, double nota2):
_matricula(matricula), _nome(nome), _nota1(nota1), _nota2(nota2) {
    _matricula_criptografada = ~_matricula;
    _media = (_nota1 + _nota2) / 2.0;
}

Alunos::Alunos(){
    _matricula = 0;
    _matricula_criptografada = ~0;
    _nota1 = 0.0;
    _nota2 = 0.0;
    _media = 0.0;
}

//destrutor
Alunos::~Alunos(){}

void Alunos::print_binario_criptografado(){
    for(int i = 31; i >= 0; i--){
        if((_matricula_criptografada & (1 << i)) != 0)
            cout << 1;
        else
            cout << 0;
        if(i % 8 == 0)
            cout << " ";
    }

    return;
}

//get
int Alunos::get_matricula(){
    return this->_matricula;
}

int Alunos::get_matricula_criptografada(){
    return this->_matricula_criptografada;
}

string Alunos::get_nome(){
    return this->_nome;
}

double Alunos::get_nota1(){
    return this->_nota1;
}

double Alunos::get_nota2(){
    return this->_nota2;
}

double Alunos::get_media(){
    return this->_media;
}

//set
void Alunos::set_matricula(int matricula){
    _matricula = matricula;
    return;
}

void Alunos::set_matricula_criptograda(int matricula_criptografada){
    _matricula_criptografada = matricula_criptografada;
    return;
}

void Alunos::set_nome(string nome){
    _nome = nome;
    return;
}

void Alunos::set_nota1(double nota1){
    _nota1 = nota1;
    return;
}

void Alunos::set_nota2(double nota2){
    _nota2 = nota2;
    return;
}

void Alunos::set_media(double media){
    _media = media;
    return;
}
