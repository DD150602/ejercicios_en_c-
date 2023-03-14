#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int generarnumero(int valor);
int intentar(vector<int> &oportunidades, int random);
int registrarjuego(vector<int> &ejecuciones, int dato);
int imprimirintentos(vector<int> &ejecuciones);

int main() {
  char confi;
  vector<int> ejecuciones;
  vector<int> oportunidades;
  int numeroazar;
  int rango;
  do {
    rango = generarnumero(100);
    cout << "Tiene 8 intentos para adivinar un numero entre el 0 y " << rango
         << endl;
    numeroazar = generarnumero(rango);
    cout << numeroazar << endl;
    intentar(oportunidades, numeroazar);
    registrarjuego(ejecuciones, numeroazar);
    cout << "Digite s si desea repetir el programa:" << endl;
    cin >> confi;
  } while (confi == 'S' || confi == 's');
  imprimirintentos(ejecuciones);
}

int generarnumero(int valor) {
  srand(time(NULL));
  int num;
  num = rand() % (valor + 1);
  return num;
}

int intentar(vector<int> &oportunidades, int random) {
  int dato;
  int continuar = 0;
  oportunidades.clear();
  do {
    cout << "--------------Intento " << continuar + 1 << "--------------"
         << endl;
    cin >> dato;
    oportunidades.push_back(dato);
    if (dato == random) {
      cout << "¡FELICITACIONES, HA ACERTADO AL NUMERO HAS GANADO!" << endl;
      cout << "Ha utilizado " << continuar + 1 << " intentos" << endl;
      break;
    }
    continuar++;
  } while (continuar < 8);
  if (dato != random) {
    cout << "UPS, NO HA ACERTADO EL NUMERO!" << endl;
  }
  return dato;
}

int registrarjuego(vector<int> &ejecuciones, int dato) {
  ejecuciones.push_back(dato);
} // Fin registrarEdad

int imprimirintentos(vector<int> &ejecuciones) {
  cout << "Usted ha jugado " << ejecuciones.size()
       << " vez \nLos numeros generados son:" << endl;
  for (int i = 0; i < ejecuciones.size(); i++) {
    cout << ejecuciones.at(i) << " | ";
  }
}
