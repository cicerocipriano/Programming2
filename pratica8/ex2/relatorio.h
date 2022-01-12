#ifndef RELATORIO_H
#define RELATORIO_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class relatorio{
private:
    ifstream _fin;
    ofstream _fout;
    vector<string> _funcionarios, _nomes;
    vector<double> _quantias;
    double _total_gasto;

    void preenche_nome(string funcionario);
    void preenche_quantia(string funcionario);

    void preenche_vectors();
    void cria_relatorio();
public:
    relatorio();
    ~relatorio();
};

#endif // RELATORIO_H
