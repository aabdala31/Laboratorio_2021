#include <iostream>

using namespace std;

void suma (int num_1, int num_2)
{
int resultado = num_1 + num_2;
cout << resultado;
}

void resta (int num_1, int num_2)
{
int resultado = num_1 - num_2;
cout << resultado;
}

void producto (int num_1, int num_2)
{
int resultado = num_1 * num_2;
cout << resultado;
}

void cociente (int num_1, int num_2)
{
int resultado = num_1 / num_2;
cout << resultado;
}

int main()
{
    int num_1;
    int num_2;
    string simb;

    cout << "Ingrese un numero: ";
    cin >> num_1;
    cout << "Ingrese otro numero: ";
    cin >> num_2;
    cout << "Ingrese la operacion deseada (+, -, *, /): ";
    cin >> simb;

    if(simb == "+"){

        suma (num_1, num_2);

    }
    if(simb == "-"){

        resta (num_1, num_2);

    }
    if(simb == "*"){

        producto (num_1, num_2);

    }
    if(simb == "/"){

        cociente (num_1, num_2);

    }
}
