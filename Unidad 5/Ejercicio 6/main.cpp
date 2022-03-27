#include <iostream>

using namespace std;

void f (int v, int num_i){

    v = num_i;
    cout << "Guardado exitoso.";

}

int main()
{
    int num_i;
    int v;

    cout << "Ingrese un numero: ";
    cin >> num_i;

    cout << "Guardando numero en la variable..." << endl;

    f (v, num_i);

}
