#include "ItemAgenda.h"

using namespace std;

ItemAgenda::ItemAgenda(){}

ItemAgenda::ItemAgenda(const string& desc, const Data& dt, const Horario& hr):
    _descricao(desc){
    set_data(dt);
    set_horario(hr);
}

ItemAgenda::ItemAgenda(const ItemAgenda& it){
    set_descricao(it.get_descricao());
    set_data(it.get_data());
    set_horario(it.get_horario());
}

ItemAgenda::~ItemAgenda(){}

void ItemAgenda::set_descricao(const string& dc){
    _descricao = dc;

    return;
}

void ItemAgenda::set_data(const Data& d){
    _data = d;

    return;
}

void ItemAgenda::set_horario(const Horario& h){
    _horario = h;

    return;
}

const string& ItemAgenda::get_descricao() const{
    return this->_descricao;
}

const Data& ItemAgenda::get_data() const{
    return this->_data;
}

const Horario& ItemAgenda::get_horario() const{
    return this->_horario;
}
