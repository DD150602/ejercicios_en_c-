#include <iostream>

using namespace std;

int main()
{
    float estatura;
    int edad;
    float peso;
    float sumaestatura;
    float sumaedad;
    float sumapeso;
    float promestatura;
    float promedad;
    float prompeso;
    string nombre;
    string resp;
    float imc;
    int cantjugadores;
    do
    {
        cout<<"bienvenido al sistema de registros de jugadores"<<endl;
        cout<<""<<endl;
        cout<<"cuantos jugadores quiere registrar"<<endl;
        cin>>cantjugadores;
//para ingresar a todos los jugadores
        for (int i=1; i<=cantjugadores; i++)
        {
            cout<<"ingrese el nombre del jugador"<<endl;
            cin>>nombre;
            do
            {
                cout<<"ingrese la edad del jugador, recuerde que deve tener entre 16 y 18 años"<<endl;
                cin>>edad;
            }while (edad<16 || edad>18);
            do
            {
                cout<<"ingrese el peso del jugador, recuerde que no puede pesar menos de 50KG"<<endl;
                cin>>peso;
            }while (peso<50);

            do
            {
                cout<<"ingrese la estatura del jugador, recuerde que no puede tener menos de 1.55 m"<<endl;
                cin>>estatura;
            }while (estatura<1.55);

//se calcula el imc (indice de masa corporal)
            imc = peso / (estatura*estatura);
            if (imc<18.5)
            {
                cout<<nombre<<"tiene un imc demaciado bajo"<<imc<<endl;
            } else if (imc >=18.5 || imc<=24.9)
            {
                cout<<nombre<<" tiene in imc saludable "<<imc<<endl;
            }else if (imc>=25.0 || imc<=29.9)
            {
                cout<<nombre<<" tiene un imc de sobrepeso "<<imc<<endl;
            }else if (imc>=30.0)
            {
                cout<<nombre<<" tiene un imc demaciado alto "<<imc<<endl;
            }


//suma todaas las edades y la guarda en la variable
            sumaedad=sumaedad+edad;
            sumaestatura=sumaestatura+estatura;
            sumapeso=sumapeso+peso;
        }

//saca todos los promedios
        cout<<""<<endl;
        promedad=sumaedad/cantjugadores;
        promestatura=sumaestatura/cantjugadores;
        prompeso=sumapeso/cantjugadores;
        cout<<"el promedio de la edad es "<<promedad<<endl;
        cout<<"el promedio de la estatura es "<<promestatura<<endl;
        cout<<"el promedio de el peso es "<<prompeso<<endl;

        cout<<"¿quiere iniciar de nuevo?"<<endl;
        cin>>resp;
    }while (resp == "si");

    return 0;
}
