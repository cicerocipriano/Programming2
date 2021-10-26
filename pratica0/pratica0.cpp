// pratica0

#include <iostream>

using namespace std;

int main () {

  long int value1 = 200000, value2;

  // (a)
  long int *longPtr;

  // (b)
  longPtr = &value1;

  // (c)
  cout << *longPtr << endl;

  // (d)
  value2 = *longPtr;

  // (e)
  cout << value2 << endl;

  // (f)
  cout << &value1 << endl;

  // (g)
  cout << longPtr << endl;
  // O valor impresso eh o mesmo, pois longPtr armazena o endereco do value1
  
  return 0;
}
