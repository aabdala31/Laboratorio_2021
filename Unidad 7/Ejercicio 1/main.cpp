#include <iostream>

using namespace std;

struct Persona {

    string nombre, apellido;
    int edad;

};

int main()
{
    Persona datos;

    cout << "Ingrese nombre: ";
    cin >> datos.nombre;

    cout << "Ingrese apellido: ";
    cin >> datos.apellido;

    cout << "Ingrese edad: ";
    cin >> datos.edad;

    if (datos.edad > 15) {

        cout << "Nombre: " << datos.nombre << endl;
        cout << "Apellido: " << datos.apellido << endl;
        cout << "Edad: " << datos.edad << endl;

    }

    else cout << "error";

}
