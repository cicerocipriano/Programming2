#include "Conjunto2.h"
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){
    unsigned long long int n;
    cin >> n;
    Conjunto2<int> A(n), B, C;
    for(unsigned long long int i = 0; i < n; i++)
        A.insere(i + 1);
    B = A;
    C = A + B;
    cout << C.pertence(10) << endl;

    return 0;
}
