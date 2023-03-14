#include <iostream>
using namespace std;

int main() {
  int cont;
  char dato;
  int i;
  int j;
  cout << "Digite un caracter " << endl;
  cin >> dato;

  cout << "Digite un numero " << endl;
  cin >> cont;
  i = 0;

  while (i < cont) {

    j = 0;

    while (j <= i) {

      cout << dato;
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}
