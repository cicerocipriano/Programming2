#include "Animal.h"
#include <string>
#include <vector>

Animal::Animal(std::string cor):
    _cor(cor), _id(get_new_id()) {}

unsigned int Animal::_next_id=1;

Animal* Animal::reproduz(){
    Animal *prole= new Animal(_cor);
    return prole;
}

void Animal::faz_barulho(){}

unsigned int Animal::get_id(){
    return _id;
}

unsigned int Animal::get_new_id(){
    Animal::_next_id++;
    return Animal::_next_id-1;
}

Animal::~Animal(){}

void popula(std::vector<Animal*>& fazenda, Animal* A, unsigned int max_populacao){
    int escolhido = rand() % fazenda.size();
    fazenda.push_back(A->reproduz());
    if(fazenda.size() < max_populacao)
        popula(fazenda, fazenda[escolhido], max_populacao);
}
