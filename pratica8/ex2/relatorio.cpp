#include "relatorio.h"

using namespace std;

void relatorio::preenche_nome(string funcionario){
    string nome;
    for(int i = 0; funcionario[i] != ' '; i++)
        nome.push_back(funcionario[i]);
    _nomes.push_back(nome);

    return;
}

void relatorio::preenche_quantia(string funcionario){
    size_t found = funcionario.find('$') + 1;
    string quantia = funcionario.substr(found);
    double valor = atof(quantia.c_str());
    _quantias.push_back(valor);

    return;
}

void relatorio::preenche_vectors(){
    while(true){
        if(_fin.eof())
            break;
        else{
            string aux;
            getline(_fin, aux);
            _funcionarios.push_back(aux);
        }
    }

    _funcionarios.pop_back();

    if(_funcionarios.size() == 0){
        cerr << "Entrada vazia" << endl;
        exit(1);
    }

    for(int i = 0; i < _funcionarios.size(); i++){
        preenche_nome(_funcionarios[i]);
        preenche_quantia(_funcionarios[i]);
    }

    return;
}

void relatorio::cria_relatorio(){
    for(int i = 0; i < _funcionarios.size(); i++)
        _total_gasto += _quantias[i];

    _fout << "Nro. Funcionario Gasto %" << endl;
    for(int i = 0; i < _funcionarios.size(); i++)
        _fout << i + 1 << " " << _nomes[i] << " R$" << _quantias[i] << " " << _quantias[i] * 100 / _total_gasto << "%" << endl;
    _fout << "Gasto mensal total: R$" << _total_gasto << endl;
    _fout << "Gasto medio por funcionario: R$" << _total_gasto / _funcionarios.size() << endl;

    return;
}

relatorio::relatorio(){
    _fin.open("funcionarios.txt");
    _fout.open("relatorio.txt");
    _total_gasto = 0;

    preenche_vectors();
    cria_relatorio();

    _fin.close();
    _fout.close();
}

relatorio::~relatorio(){}
