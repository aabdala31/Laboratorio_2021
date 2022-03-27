#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

struct alumnos {

    string nombre, apellido;
    int edad;
    float notas;

};

int main()
{

    setlocale(LC_CTYPE, "Spanish");

    vector <alumnos> a (5);
    int aux, mas_alto;
    int aux1 = 0;

    for (int i = 0; i < a.size(); i++){

        cout << "Ingrese edad ("<< i + 1 <<"): ";
        cin >> a[i].edad;
        cout << "Ingresar nota ("<< i + 1 <<"): ";
        cin >> a[i].notas;
        cout << endl;

    }

    cout << "Ingrese una edad: ";
    cin >> aux;

    for (int i = 0; i < a.size(); i++){

        if (aux == a[i].edad){

            aux1++;

            if (mas_alto < a[i].notas) {

                mas_alto = a[i].notas;

            }

        }
    }

    if (aux1 == 0) cout << "No se registro ningun alumno con esa edad. ";

    else cout << endl << "Promedio mas alto de las personas con " << aux << " año(s): " << mas_alto << endl;

}
