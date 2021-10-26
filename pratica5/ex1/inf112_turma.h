#ifndef INF112_TURMA_H
#define INF112_TURMA_H

#include <string>

class Turma {
private:
    std::string _codigo;
    int _ano;
public:
    Turma(std::string codigo, int ano);
    void set_codigo(std::string codigo);
    void set_ano(int ano);
    std::string get_codigo();
    int get_ano();
};

#endif // INF112_TURMA_H
