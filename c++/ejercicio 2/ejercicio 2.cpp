#include <iostream>
using namespace std;
int main() {
  string nombre;
  string equipo;
  int edad;
  float estatura;
  float masa;
  int nregistro;
  float sumapeso;
  float sumaestatura;
  float sumaedad;
  int cont = 0;
  string resp;
  float promedad;
  float promestatura;
  float prompeso;
  int contjugadores;
  int opc ;

  do
  {
    promedad = 0;
    promestatura = 0;
    prompeso = 0;
    contjugadores = 0;
    do
    {
      cout << "Digite el nombre del jugador  " << endl;
      cin >> nombre;
      do
      {
        cout << "Recuerda que el rango de edades es entre 16 y 18 años" << endl;
        cout << "Digite la edad del jugador  " << endl;
        cin >> edad;
      } while (edad < 16 || edad > 18);

      do {
        cout << "Recuerde que la estatura debe ser mayor a 1.55 m" << endl;
        cout << "Digite la estatura del jugador " << endl;
        cin >> estatura;
      } while (edad < 1.55);

      do {
        cout << "Recuerde que el peso no puede ser menor a 50 Kg" << endl;
        cout << "Digite el peso del jugador   " << endl;
        cin >> masa;

      } while (masa < 50);

      float imc = masa / (estatura * estatura);
      if (imc < 18.5) {
        cout << nombre << " esta bajo de peso y su imc es de " << imc << endl;
      } else if (imc >= 18.5 || imc <= 24.9) {
        cout << nombre << " tene un peso saludable y su imc es de " << imc
             << endl;
      } else if (imc >= 25.0 || imc <= 29.9) {
        cout << nombre << " y tiene sobrepeso y su imc es de " << imc << endl;
      } else if (imc >= 30.0) {
        cout << nombre << " tiene obesidad y su imc es de " << imc << endl;
      }

      sumaedad = sumaedad + edad;
      sumaestatura = sumaestatura + estatura;
      sumapeso = sumapeso + masa;

      contjugadores++;

      cout << "¿quiere registrar otro jugador?" << endl;
      cin >> resp;

    } while (resp == "si");
    promedad = sumaedad / contjugadores;
    promestatura = sumaestatura / contjugadores;
    prompeso = sumapeso / contjugadores;
    cout << "los promedios de los jugadores es \n "
         << "promedio edad: " << promedad << endl
         << "promedio estratura: " << promestatura << endl
         << "promedio peso: " << prompeso << endl;

    cout<<"Quieres ingresar un nuevo equipo "<<endl;
    cin>> opc ;
  } while (opc == 1);

  return 0;
}
