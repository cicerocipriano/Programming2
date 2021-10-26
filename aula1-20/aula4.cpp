// how this function compare strings?

#include <iostream>

using namespace std;

bool compare_string (char *c1, char *c2) {

    for (; *c1 && *c1 == *c2; c1++, c2++) {} // the function compares the adresses by de-referecing the pointers (c1 and c2)

    return *c1 == *c2;
}

int main (int argc, char **argv) {

    char a[101], b[101];
    bool e;

    cout << "Write two words:" << endl;
    cin >> a >> b;

    e = compare_string(a,b);

    if (e) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
