#include <iostream>

using namespace std;

int main()
{
    int letra;
    char carac;

    cout << "Ingrese una letra: ";
    cin >> carac;

    letra = carac;

    while (!isalpha(carac)){

    cout << "Caracter no ingresado correctamente. Intentelo de nuevo: ";
    cin >> carac;

    }

    if (letra >= 65 && letra <= 90){

    cout << "Es una mayuscula";
    }

    else if (letra >= 97 && letra <= 122){

    cout << "Es una minuscula";
    }

}
