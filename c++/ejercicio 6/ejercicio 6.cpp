

#include <iostream>

using namespace std;

int main() {
  cout << "Ejemplo switch\n";

  int numero;
  int rango;
  int i;
  int caso;
  cout << "digite un numero ";
  cin >> numero;
  cout << "Digite un el rango que quiere";
  cin >> rango;
  cout << "para ver los multiplos de su numero digite 1, para ver los "
          "divisores digite 2: ";
  cin >> caso;

  switch (caso) {
  case 1:
    for (i = 1; i <= rango; i++) {
      if (i % numero == 0) {
        cout << "los multiplos de " << numero << " son" << endl;
        cout << i << endl;
      }
    }
    break;

  case 2:
    for (i = 2; i <= (rango/2); i++) {
      if (numero % i  == 0) {
        cout << "los divisores de " << numero << " son" << endl;
        cout << i << endl;
      }
    }
      break;

    default:
      cout << "Error: valor no aceptado ";

    } // fin switch

    return 0;
  } // Fin función main
