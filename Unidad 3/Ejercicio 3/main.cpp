#include <iostream>

using namespace std;

int main()
{
    string cadena_1;
    char letra;

    cout << "Ingrese una palabra: ";
    cin >> cadena_1;
    cout << "Ingrese una letra: ";
    cin >> letra;

    cadena_1[cadena_1.size()-1] = letra;

    cout << cadena_1;

}
