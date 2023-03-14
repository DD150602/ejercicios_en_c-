#include <iostream>
using namespace std;

int main() {
  int deporte;
  string resp;
  do {
    cout << "Bienvenido al sistema de inscripcion de deportes " << endl;
    cout << "los deportes disponibles son  " << endl
         << "1.Baloncesto " << endl
         << "2.Futbol" << endl
         << "3.Tenis" << endl
         << "4.Natacion" << endl
         << "5.Golf" << endl;

    do {
      cout << "Digite el numero del deporte en el uqe se va a inscribir "
           << endl;
      cin >> deporte;
    } while (deporte < 0);

    switch (deporte) {
    case 1:
      cout << "Para el deporte es necesario: Uniforme, Zapatos , Idratacion "
           << endl;
      break;

    case 2:
      cout << "Para el deporte es necesario: Uniforme , Guayos ,Canilleras "
              ",Medias largas                     Idratacion  "
           << endl;
      break;

    case 3:
      cout << "Para el deporte es nercesario traer : Uniforme , raqueta , "
              "Idratacion "
           << endl;
      break;

    case 4:
      cout << "Para el deporte es necesario : Gorro para picina , traje de "
              "baño , gafas                       de buseo ,sandalias "
           << endl;
      break;

    case 5:
      cout << "Para el deporte es necesario : Talega de golf , Palos de golg , "
              "ropa                         comoda , arregla piques , guante "
              "para golf y Idratacion "
           << endl;
      break;

    default:
      cout << "Error: valor no aceptado ";
    }
    cout << "quiere inicier el proceso nuevamente" << endl;
    cin >> resp;
  } while (resp == "si" || resp == "SI" || resp == "S" || resp == "s");
}
