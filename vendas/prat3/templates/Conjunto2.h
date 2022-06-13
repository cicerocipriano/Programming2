#ifndef CONJUNTO2_H
#define CONJUNTO2_H

#include <iostream>

using namespace std;

template<class T>
class Conjunto2;

template<class T>
istream& operator>>(istream&, Conjunto2<T>&);

template<class T>
ostream& operator<<(ostream&, const Conjunto2<T>&);

template<class T>
class Conjunto2{
    friend istream& operator>>(istream& input, Conjunto2& c){
        T elem;
        while(cin >> elem)
            bool aux = c.insere(elem);
        return input;
    }
    friend ostream& operator<<(ostream& output, const Conjunto2& c){
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
    Conjunto2(const unsigned long long int a = 10){
        create();
        this->_tam_array = a;
        this->_elementos = new T[this->_tam_array];
    }
    Conjunto2(const Conjunto2& other){
        create();
        *this = other;
    }
    ~Conjunto2(){
        destroy();
    }
    const bool pertence(const T& elem) const{
        if(this->num_elementos() == 0)
            return false;
        for(unsigned long long int i = 0; i < this->num_elementos(); i++)
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
    const bool operator==(Conjunto2& other) const{
        if(this->num_elementos() != other.num_elementos())
            return false;
        for(unsigned long long int i = 0; i < this->num_elementos(); i++)
            if(this->_elementos[i] != other._elementos[i])
                return false;
        return true;
    }
    const bool operator!=(Conjunto2& other) const{
        return !(*this == other);
    }
    const Conjunto2& operator=(const Conjunto2& other){
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
    const Conjunto2 operator+(const Conjunto2& other) const{
        Conjunto2 C(this->_tam_array + other._tam_array);
        unsigned long long int i;
        bool repete;
        for(i = 0; i < this->num_elementos(); i++)
            C._elementos[i] = this->_elementos[i];
        for(unsigned long long int j = 0; j < other.num_elementos(); j++){
            repete = false;
            for(unsigned long long int k = 0; k < this->num_elementos(); k++){
                if(other._elementos[j] == this->_elementos[k])
                    repete = true;
            }
            if(!repete)
                C._elementos[i++] = other._elementos[j];
        }
        C._num_elementos = i;
        return C;
    }
    const Conjunto2 operator*(const Conjunto2& other){
        Conjunto2 C(this->min(this->num_elementos(),other.num_elementos()));
        unsigned long long int new_num = 0;
        for(unsigned long long int i = 0; i < this->num_elementos(); i++){
            for(unsigned long long int j = 0; j < other.num_elementos(); j++){
                if(this->_elementos[i] == other._elementos[j]){
                    C._elementos[new_num++] = this->_elementos[i];
                    break;
                }
            }
        }
        C._num_elementos = new_num;
        return C;
    }
    const Conjunto2 operator-(const Conjunto2& other){
        Conjunto2 C(this->_tam_array);
        unsigned long long int new_num = 0;
        bool repete;
        for(unsigned long long int i = 0; i < this->num_elementos(); i++){
            repete = false;
            for(unsigned long long int j = 0; j < other.num_elementos(); j++){
                if(this->_elementos[i] == other._elementos[j]){
                    repete = true;
                    break;
                }
            }
            if(!repete)
                C._elementos[new_num++] = this->_elementos[i];
        }
        C._num_elementos = new_num;
        return C;
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
        this->_elementos = NULL;
        this->_num_elementos = this->_tam_array = 0;
        return;
    }
    void destroy(){
        delete[] this->_elementos;
        this->_num_elementos = this->_tam_array = 0;
        return;
    }
    const unsigned long long int min(const unsigned long long int a, const unsigned long long int b){
        if(a >= b)
            return a;
        return b;
    }
};

#endif // CONJUNTO2_H
