#include "Conjunto2.h"
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){
    unsigned long long int n;
    cin >> n;
    Conjunto2<int> A(n), B(n), C;
    for(unsigned long long int i = 0; i < n; i++){
        A.insere(i + 1);
        B.insere(-1 - i);
    }
    C = A + B;
    cout << C.pertence(10) << endl;

    return 0;
}
