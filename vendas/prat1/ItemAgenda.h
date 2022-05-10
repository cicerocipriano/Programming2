#ifndef ITEMAGENDA_H
#define ITEMAGENDA_H

#include <string>

#include "Horario.h"
#include "Data.h"

using namespace std;

class ItemAgenda {
public:
    ItemAgenda();
    ItemAgenda(const string& desc, const Data& dt, const Horario& hr);
    ItemAgenda(const ItemAgenda& it);
    ~ItemAgenda();

    void set_descricao(const string& dc);
    void set_data(const Data& d);
    void set_horario(const Horario& h);

    const string& get_descricao() const;
    const Data& get_data() const;
    const Horario& get_horario() const;
private:
    string _descricao;
    Data _data;
    Horario _horario;
};

#endif // ITEMAGENDA_H
