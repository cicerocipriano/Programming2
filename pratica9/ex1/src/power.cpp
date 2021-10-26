#include <iostream>
#include "../include/power.h"

Power::Power(){
    _total=1;
}

Power::~Power(){}

void Power::elevar(int k, int n){
    if (n==0){
        std::cout << _total << std::endl;;
        return;
    }
    _total*=k;
    elevar(k,n-1);
}
