#include <iostream>

using namespace std;


void suma (int num_1, int num_2)
{
int resultado = num_1 + num_2;
cout << "El resultado es " << resultado;
}


void resta (int num_1, int num_2)
{
int resultado = num_1 - num_2;
cout << "El resultado es " << resultado;
}


void producto (int num_1, int num_2)
{
int resultado = num_1 * num_2;
cout << "El resultado es " << resultado;
}


void cociente (int num_1, int num_2)
{
int resultado = num_1 / num_2;
cout << "El resultado es " << resultado;
}


int main()
{
    int num_1, num_2;
    string simb;

    cout << "Ingrese un numero: ";
    cin >> num_1;
    cout << "Ingrese otro numero: ";
    cin >> num_2;

    cout << "Que desea hacer?" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;

    cin >> simb;

    if(simb == "1"){

        suma (num_1, num_2);

    }
    if(simb == "2"){

        resta (num_1, num_2);

    }
    if(simb == "3"){

        producto (num_1, num_2);

    }
    if(simb == "4"){

        cociente (num_1, num_2);

    }

}
