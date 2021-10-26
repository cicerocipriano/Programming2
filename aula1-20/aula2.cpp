// what will the code print and why does it print that?

#include <iostream>

using namespace std;

int main (int argc, char **argv) {

    int a[10];

    cout << (long)(a+1) - (long)(a) << endl;

    return 0;
}
