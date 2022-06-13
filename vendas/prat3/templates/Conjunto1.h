#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <iostream>

using namespace std;

template<class T>
class Conjunto;

template<class T>
istream& operator>>(istream&, Conjunto<T>&);

template<class T>
ostream& operator<<(ostream&, const Conjunto<T>&);

template<class T>
class Conjunto{
    friend istream& operator>>(istream& input, Conjunto& c){
        T elem;
        while(cin >> elem)
            bool aux = c.insere(elem);
        return input;
    }
    friend ostream& operator<<(ostream& output, const Conjunto& c){
        cout << "{";
        for(unsigned long long int i = 0; i < c.num_elementos(); i++){
            cout << c[i];
            if(i == c.num_elementos() - 1)
                break;
            cout << ",";
        }
        cout << "}";
        return output;
    }
public:
    Conjunto(const unsigned long long int a = 10){
        create();
        this->_tam_array = a;
        this->_elementos = new T[this->_tam_array];
    }
    Conjunto(const Conjunto& other){
        create();
        *this = other;
    }
    ~Conjunto(){
        destroy();
    }
    const bool pertence(const T& elem) const{
        if(this->num_elementos() == 0)
            return false;
        for(unsigned long long int i; i < this->num_elementos(); i++)
            if(this->_elementos[i] == elem)
                return true;
        return false;
    }
    const bool insere(const T& elem){
        if(this->num_elementos() == this->_tam_array)
            return false;
        else if(this->pertence(elem))
            return false;
        this->_elementos[this->num_elementos()] = elem;
        this->_num_elementos++;
        return true;
    }
    const unsigned long long int num_elementos() const{
        return this->_num_elementos;
    }
    const bool operator==(Conjunto& other) const{
        if(this->num_elementos() != other.num_elementos())
            return false;
        for(unsigned long long int i = 0; i < this->num_elementos(); i++)
            if(this->_elementos[i] != other._elementos[i])
                return false;
        return true;
    }
    const bool operator!=(Conjunto& other) const{
        return !(*this == other);
    }
    const Conjunto& operator=(const Conjunto& other){
        if(this == &other)
            return *this;
        destroy();
        this->_tam_array = other._tam_array;
        this->_num_elementos = other._num_elementos;
        _elementos = new T[_tam_array];
        for(unsigned long long int i = 0; i < this->num_elementos(); i++)
            this->_elementos[i] = other._elementos[i];
        return *this;
    }
    T& operator[](const unsigned long long int pos){
        return this->_elementos[pos];
    }
    const T& operator[](const unsigned long long int pos) const{
        return this->_elementos[pos];
    }
private:
    T* _elementos;
    unsigned long long int _num_elementos, _tam_array;
    void create(){
        _elementos = NULL;
        _num_elementos = _tam_array = 0;
        return;
    }
    void destroy(){
        delete[] _elementos;
        _num_elementos = _tam_array = 0;
        return;
    }
};

#endif // CONJUNTO_H
