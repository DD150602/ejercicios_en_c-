#include <iostream>

using namespace std;

int main()
{
    int incremento;
    int limite;
    string resp;
    do
    {
        cout<<"escribe el incremento de los numeros"<<endl;
        cin>>incremento;
        cout<<"escribe el rango hasta donde llegan los numeros"<<endl;
        cin>>limite;
        if (incremento<=0 || limite<=0)
            {
            cout<<"los numeros no pueden ser menores ni iguales a cero"<<endl;
            } else
            {
                if (incremento > limite)
                {
                    cout<<"el incremento no puede ser mayor al limite"<<endl;
                }else
                {
                    for(int i = incremento; i <= limite; i= i + incremento)
                    {
                        cout<<i<<endl;
                    }
                }
            }
    cout<<"¿quiere iniciar otra vez?"<<endl;
    cin>>resp;
    }while (resp == "si" || resp == "Si" || resp == "SI" || resp == "s" || resp == "S");

    return 0;
}
