#include <iostream>
#include "../include/mdc.h"

Mdc::Mdc(){
    std::cout << "Digite x: ";
    std::cin >> _x;
    std::cout << "Digite y: ";
    std::cin >> _y;
    if(_x>=_y)
        _mdc=_y;
    else
        _mdc=_x;
}

Mdc::~Mdc(){}

void Mdc::achar_mdc(){
    if(_x%_mdc==0&&_y%_mdc==0){
        std::cout << _mdc << std::endl;
        return;
    }
    _mdc--;
    achar_mdc();
}
