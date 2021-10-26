#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <vector>

class Animal {
    protected:
        unsigned int _id;
        std::string _cor;
    public:
        Animal(std::string cor);
        ~Animal();
        static unsigned int _next_id;
        unsigned int get_new_id();
        virtual Animal* reproduz();
        virtual void faz_barulho();
        virtual unsigned int get_id();
};

void popula(std::vector<Animal*>& fazenda, Animal* A, unsigned int max_populacao);

#endif
