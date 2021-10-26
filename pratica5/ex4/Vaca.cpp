#include <string>
#include <iostream>
#include "Vaca.h"
#include "Animal.h"

Vaca::Vaca(std::string cor,float producao_leite):
    Animal(cor), _producao_leite(producao_leite) {}

Animal* Vaca::reproduz(){
    Animal* bezerro= new Vaca(_cor,_producao_leite);
    return bezerro;
}
void Vaca::faz_barulho(){
    std::cout<<"Muuu"<<std::endl;
}

unsigned int Vaca::get_id(){
    return _id;
}

Vaca::~Vaca(){}
