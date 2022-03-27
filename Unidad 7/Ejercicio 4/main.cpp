#include <iostream>
#include <vector>

using namespace std;

struct alumnos {

    string nombre, apellido;
    int edad;
    float notas;

};

void nota (vector <alumnos> &a) {

    float mas_alto = 0;
    string nombre_mas_alto;

    for (int i = 0; i < a.size(); i++){

        cout << endl;
        cout << "Ingresar nota ("<< i + 1 <<"): ";
        cin >> a[i].notas;

    }



    for (int i = 0; i < a.size(); i++){

        if (mas_alto < a[i].notas) {

            mas_alto = a[i].notas;
            nombre_mas_alto = a[i].apellido;

        };

    }

    cout << "El promedio mas alto es: " << mas_alto << " (" << nombre_mas_alto << ")";

};

int main()
{

    vector <alumnos> a (5);
    string aux;

    for (int i; i < a.size(); i++){

        cout << "Ingrese nombre ("<< i + 1 <<"): ";
        cin >> a[i].nombre;
        cout << "Ingrese apellido ("<< i + 1 <<"): ";
        cin >> a[i].apellido;
        cout << "Ingrese edad ("<< i + 1 <<"): ";
        cin >> a[i].edad;
        cout << endl;

    }

    cout << "LISTADO" << endl;

    for (int j = 0; j < a.size(); j++){

        cout << a[j].nombre << " " << a[j].apellido << endl;

    }

    nota (a);
}
