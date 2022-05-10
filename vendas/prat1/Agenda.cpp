#include "Agenda.h"

using namespace std;

Agenda::Agenda(){
    _itens = 0;
}

Agenda::~Agenda(){}

void Agenda::inserir_item(const ItemAgenda& it){
    _vetor[_itens] = it;
    _itens++;

    return;
}

void Agenda::compromissos_data(const Data& dt) const{
    for(int i = 0; i < _itens; i++){
        if(dt.compData(_vetor[i].get_data()) == 0){
            _vetor[i].get_horario().imprime();
            cout << " " << _vetor[i].get_descricao() << endl;
        }
    }

    return;
}
