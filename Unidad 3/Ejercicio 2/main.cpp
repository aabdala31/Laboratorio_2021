#include <iostream>

using namespace std;

int main()
{
    string cadena_1, cadena_2;

    cout << "Ingrese una palabra: ";
    cin >> cadena_1;
    cout << "Ingrese otra palabra: ";
    cin >> cadena_2;

    if (cadena_1[cadena_1.size() -1] == cadena_2[cadena_2.size() -1]){

        cout << "La ultima letra de las palabras es igual";

    }
    else{

        cout << "La ultima letra de las palabras es NO igual";
    }

}
