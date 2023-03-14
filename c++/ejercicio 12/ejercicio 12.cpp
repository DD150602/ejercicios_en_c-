#include <iostream>

using namespace std;

int main() {

  int tam;
  int i;
  char Confi;
  do {
    do {
      cout << "Cuantas datos desea ingresar" << endl;
      cin >> tam;
    } while (tam <= 0);

    int datos1[tam];
    int datos2[tam];
    float sum[tam];
    float prom[tam];

    for (i = 0; i < tam; i++) {
      do {
        cout << "Ingrese le dato " << i + 1 << " del vector 1 " << endl;
        cin >> datos1[i];
      } while (datos1[i] <= 0);

      do {
        cout << "Ingrese le dato " << i + 1 << " del vector 2 " << endl;
        cin >> datos2[i];
      } while (datos2[i] <= 0);

      sum[i] = datos1[i] + datos2[i];
      prom[i] = sum[i] / 2;
    }

    for (i = 0; i < tam; i++) {
      cout << " La suma es: " << sum[i] << endl;
      cout << " El promedio es: " << prom[i] << endl;
    }
    cout << "Digite s si desea volver a ejecutar el programa: " << endl;
    cin >> Confi;

  } while (Confi == 's' || Confi == 'S');
}
