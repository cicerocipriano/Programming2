#ifndef AGENDA_H
#define AGENDA_H

#include "ItemAgenda.h"

using namespace std;

class Agenda{
public:
    Agenda();
    ~Agenda();

    void inserir_item(const ItemAgenda& it);
    void compromissos_data(const Data& dt) const;
private:
    ItemAgenda _vetor[1000];
    unsigned int _itens;
};

#endif // AGENDA_H
