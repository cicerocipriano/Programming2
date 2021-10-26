// three ways to read an array and print it (2 must use pointers)

#include <iostream>

using namespace std;

void print_string1 (int *a) {

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return;
}

void print_string2 (int *a) {

    for (int i = 0; (a + i) < (a + 10); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return;
}

void print_string3 (int *a) {

    for (int *i = a; i != (a + 10); i++) { //
        cout << *i << " ";
    }
    cout << endl;

    return;
}

int main (int argc, char **argv) {

    int a[10];

    cout << "Write ten integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    print_string1(a);

    print_string2(a);

    print_string3(a);

    return 0;
}
