#include <iostream>
#include <string>
#include "Cachorro.h"
#include "Animal.h"

Cachorro::Cachorro(std::string cor):
    Animal(cor) {}

Animal* Cachorro::reproduz(){
    Animal *filhote= new Cachorro(_cor);
    return filhote;
}
void Cachorro::faz_barulho(){
    std::cout<<"Au Au"<<std::endl;
}

unsigned int Cachorro::get_id(){
    return _id;
}

Cachorro::~Cachorro(){}
