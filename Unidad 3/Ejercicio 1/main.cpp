#include <iostream>

using namespace std;

int main()
{
    string cadena;
    int posicion_actual = 0;

        cout << "Ingrese una palabra: ";
        cin >> cadena;

    while (posicion_actual <= 3) {
        cout << cadena[posicion_actual] << endl;
        posicion_actual = posicion_actual + 1;
        }
}
