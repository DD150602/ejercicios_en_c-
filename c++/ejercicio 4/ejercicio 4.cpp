#include <iostream>
using namespace std;

int main() {
  int cinvertida;
  float interesu;
  int canos;
  float pinteres;
  float opem;
  int sumat;
  string pregunt;

  cout << "desea comenzar con el proseso digite si: ";
  cin >> pregunt;

  while (pregunt == "si") {

    cout << "Digite cuanto es el valor a invertir " << endl;
    cin >> cinvertida;

    while (cinvertida < 0) {
      cout << "Digito un valor negativo " << endl;
      cout << "Digite cuanto es el valor a invertir " << endl;
      cin >> cinvertida;
    }

    cout << "digite el porcentaje del interes  " << endl;
    cin >> interesu;

    while (interesu < 0) {
      cout << "Digito un valor negativo " << endl;
      cout << "digite el porcentaje del interes " << endl;
      cin >> interesu;
    }

    cout << "Digite el tiempo en años " << endl;
    cin >> canos;

    while (canos < 0) {
      cout << "Digito un valor negativo " << endl;
      cout << "digite el porcentaje del interes " << endl;
      cin >> canos;
    }

    opem = cinvertida * (interesu / 100) * canos;
    sumat = opem + cinvertida;

    cout << "El valor del interes es " << opem << endl;
    cout << "y la suma total es  " << sumat << endl;

    cout << "desea comenzar un proceso nuevo digite si: ";
    cin >> pregunt;
  }
}
