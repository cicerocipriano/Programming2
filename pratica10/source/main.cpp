#include <iostream>
#include <vector>
#include "../include/alunos.h"

using namespace std;

void read_values(vector<Alunos>& lista_alunos){
    int matricula = 0;
    string nome;
    double nota1, nota2;

    while(true){
        cin >> matricula;
        if(matricula == -1)
            return;
        cin >> nome >> nota1 >> nota2;
        Alunos aux(matricula,nome,nota1,nota2);
        lista_alunos.push_back(aux);
    }
}

void merge(vector<Alunos>& lista_alunos, int p, int q, int r, vector<Alunos>& aux){
    int tam = r - p, i = p, j = q, k = 0;
    while(i < q && j < r){
        if(lista_alunos[i].get_media() >= lista_alunos[j].get_media()){
            aux.push_back(lista_alunos[i]);
            i++;
            k++;
        }
        else{
            aux.push_back(lista_alunos[j]);
            j++;
            k++;
        }
    }
    while(i < q){
        aux.push_back(lista_alunos[i]);
        i++;
        k++;
    }
    while(j < r){
        aux.push_back(lista_alunos[j]);
        j++;
        k++;
    }
    for(int k = p; k < r; k++)
        lista_alunos[k] = aux[k];

    return;
}

void sort_lista(vector<Alunos>& lista_alunos, int start, int end){
    vector<Alunos> aux;

    if(start < end - 1){
        int meio = (start + end) / 2;
        sort_lista(lista_alunos,start,meio);
        sort_lista(lista_alunos,meio,end);
        merge(lista_alunos,start,meio,end,aux);
    }

    return;
}

void print_lista(vector<Alunos>& lista_alunos){
    if(lista_alunos.size() == 0)
        return;
    for(int i = 0; i < lista_alunos.size(); i++){
        lista_alunos[i].print_binario_criptografado();
        cout << "- " << lista_alunos[i].get_nome() << " - "<< lista_alunos[i].get_media() << endl;
    }
    
    return;
}

int main(int argc, char **argv){
    vector<Alunos> lista_alunos;

    read_values(lista_alunos);

    sort_lista(lista_alunos,0,lista_alunos.size());

    print_lista(lista_alunos);
    
    return 0;
}
