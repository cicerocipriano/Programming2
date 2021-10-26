#ifndef INF112_ESTUDANTE_CPP
#define INF112_ESTUDANTE_CPP

#include "inf112_pessoa.h"
#include "inf112_turma.h"

class Estudante : public Pessoa {
private:
    const int _matricula;
    Turma _turma;
public:
    Estudante(std::string nome, int matricula, std::string codigo, int ano);
    int get_matricula() const;
    virtual std::string defina_meu_tipo() const override;
    void set_codigo(std::string codigo);
    void set_ano(int ano);
    std::string get_codigo();
    int get_ano();
};

#endif // INF112_ESTUDANTE_CPP
