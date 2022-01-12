#include "arquivoip.h"

using namespace std;

void ArquivoIP::preenche_vector(){
    int i = 0;
    while(true){
        if(_fin.eof())
            break;
        else{
            string aux;
            getline(_fin, aux);
            _IPs.push_back(aux);
            i++;
        }
    }

    _IPs.pop_back();

    if(_IPs.size() == 0){
        cout << "Entrada vazia" << endl;
        exit(1);
    }
}

void ArquivoIP::checa_IP(){
    for(int i = 0; i < _IPs.size(); i++){
        string ip = _IPs[i];
        //cout << "rodou" << endl;
        char* cstr = new char[ip.length()+1];
        //cout << "rodou" << endl;
        strcpy(cstr, ip.c_str());
        //cout << "rodou" << endl;

        // checa se o primeiro caractere e um "."
        if(cstr[0] == '.'){
            _IPs_invalidos.push_back(ip);
            //cout << "rodou" << endl;
            continue;
        }

        // checa a quantidade de "."
        int a = 0;
        for(int j = 0; cstr[j] != '\0'; j++){
            if(cstr[j] == '.')
                a++;
        }
        if(a != 3){
            _IPs_invalidos.push_back(ip);
            //cout << "rodou" << endl;
            continue;
        }

        // checa se ha algo escrito entre os pontos
        bool ha_algo = true;
        for(int j = 0; cstr[j] != '\0'; j++){
            if(cstr[j] == '.'){
                if(cstr[j+1] == '.' || cstr[j+1] == '\0'){
                    _IPs_invalidos.push_back(ip);
                    ha_algo = false;
                    break;
                }
            }
        }
        if(ha_algo == false)
            continue;
        //cout << "rodou" << endl;

        // checando se os espacos entre os pontos contem numeros validos
        /*char* cstr = new char[ip.length()+1];
        cout << "rodou" << endl;
        strcpy(cstr, ip.c_str());
        cout << "rodou" << endl;*/

        char* ips[4];
        ips[0] = strtok(cstr,".");
        ips[1] = strtok(NULL,".");
        ips[2] = strtok(NULL,".");
        ips[3] = strtok(NULL,"\0");
        /*for(int j = 0; j < 4; j++){
            cout << ips[j] << endl;
        }
        cout << "rodou" << endl;*/

        int numbers[4];
        bool nao_num = false, valid[4];
        for(int j = 0; j < 4; j++){
            for(int k = 0; ips[j][k] != '\0'; k++){
                if(ips[j][k] < '0' || ips[j][k] > '9'){
                    _IPs_invalidos.push_back(ip);
                    //cout << "rodou" << endl;
                    nao_num = true;
                    break;
                }
            }
            if(nao_num)
                break;
        }
        if(nao_num)
            continue;
        //cout << "rodou" << endl;

        for(int j = 0; j < 4; j++){
            numbers[j] = atoi(ips[j]);
            //cout << "rodou" << endl;
            if(numbers[j] < 0 || numbers[j] > 255)
                valid[j] = false;
            else
                valid[j] = true;
        }

        if(valid[0] == true && valid[1] == true && valid[2] == true && valid[3] == true)
            _IPs_validos.push_back(ip);
        else
            _IPs_invalidos.push_back(ip);

        delete[] cstr;
        //cout << "rodou" << endl;
    }

    return;
}

ArquivoIP::ArquivoIP(){
    try{
        _fin.open("entrada.txt");
        if(_fin.fail())
            throw runtime_error("Could not open file");
    } catch(exception &ex){
        cerr << ex.what() << endl;
        exit(1);
    }

    try{
        _fout.open("ips.txt");
        if(_fout.fail())
            throw runtime_error("Could not open file");
    } catch(exception &ex){
        cerr << ex.what() << endl;
        exit(1);
    }

    preenche_vector();

    checa_IP();

    _fout << endl << "VALIDOS" << endl;
    for(int i = 0; i < _IPs_validos.size(); i++)
        _fout << _IPs_validos[i] << endl;
    _fout << endl << endl;

    _fout << endl << "INVALIDOS" << endl;
    for(int i = 0; i < _IPs_invalidos.size(); i++){
        _fout << _IPs_invalidos[i] << endl;
    }
    _fout << endl << endl;

    _fin.close();
    _fout.close();
}

ArquivoIP::~ArquivoIP(){}
