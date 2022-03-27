#include <iostream>

using namespace std;

void suma (int num){

    num = num + 1;
    cout << "El resultado es: " << num;

}

void resta (int num){

    num = num - 1;
    cout << "El resultado es: " << num;

}

int main()
{
    int num;
    string simb;

    cout << "Ingrese numero: ";
    cin >> num;
    cout << "Ingrese operador: ";
    cin >> simb;

    if (simb == "+"){

        suma (num);

    }

    if (simb == "-"){

        resta (num);

    }

}
