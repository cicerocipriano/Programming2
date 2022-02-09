#ifndef ALUNOS_H
#define ALUNOS_H

#include <iostream>
#include <string>

using namespace std;

class Alunos{
private:
    int _matricula, _matricula_criptografada;
    string _nome;
    double _nota1, _nota2, _media;
public:
    //construtores
    Alunos(int matricula, string nome, double nota1, double nota2);
    Alunos();

    //destrutor
    ~Alunos();

    void print_binario_criptografado();

    //get
    int get_matricula();
    int get_matricula_criptografada();
    string get_nome();
    double get_nota1();
    double get_nota2();
    double get_media();

    //set
    void set_matricula(int matricula);
    void set_matricula_criptograda(int matricula_criptografada);
    void set_nome(string nome);
    void set_nota1(double nota1);
    void set_nota2(double nota2);
    void set_media(double media);
};

#endif // ALUNOS_H
