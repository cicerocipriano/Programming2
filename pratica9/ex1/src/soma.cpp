#include <iostream>
#include "../include/soma.h"

Soma::Soma(){
    _total=0;
}

Soma::~Soma(){}

void Soma::somar(int m, int n){
    if(m==n){
        _total+=m;
        std::cout << _total << std::endl;
        return;
    }
    _total+=m;
    somar(m+1,n);
}
