#include <iostream>
#include <vector>

using namespace std;

struct alumnos {

    string nombre, apellido;
    int edad;
    float notas;

};

int main()
{
    vector <alumnos> a (5);
    float mas_alto = 0;

    for (int i = 0; i < a.size(); i++){

        cout << "Ingresar nota: ";
        cin >> a[i].notas;

    }



    for (int i = 0; i < a.size(); i++){

        if (mas_alto < a[i].notas) mas_alto = a[i].notas;

    }

    cout << "El promedio mas alto es: " << mas_alto;

}
