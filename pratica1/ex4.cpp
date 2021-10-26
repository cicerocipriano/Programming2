#include <iostream>

using namespace std;

int main(int argc, char **argv) {

    char str[] = "abc teste";

    for (char *i = (str + 8); i >= str; i--) {
        cout << *i;
    }
    cout << endl;

    return 0;
}
