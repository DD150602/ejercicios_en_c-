#include <iostream>
using namespace std;
int validacion(int tam);
int main() {
  int num1;

  cout << "Digite cantidad de datos que va a ingresar  : " << endl;
  cin >> num1;

  cout << validacion(num1);

  return 0;
}
int validacion(int tam) {
  int edad[tam];
  int i;

  for (i = 0; i < tam; i++) {
    cout << "Digite valor #" << i << endl;
    cin >> edad[i];
  }
  return edad[i];
}
