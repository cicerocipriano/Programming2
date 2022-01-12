#ifndef ARQUIVOIP_H
#define ARQUIVOIP_H

#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
#include <cstring>
#include <cstdlib>

using namespace std;

class ArquivoIP{
private:
    ifstream _fin;
    ofstream _fout;

    vector<string> _IPs;
    vector<string> _IPs_validos;
    vector<string> _IPs_invalidos;

    void preenche_vector();
    void checa_IP();
public:
    ArquivoIP();
    ~ArquivoIP();
};

#endif // ARQUIVOIP_H
