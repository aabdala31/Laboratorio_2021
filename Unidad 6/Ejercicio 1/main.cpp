#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> numeros;
   int numero_s;
   int aux;

   for (int i = 0; i < 10; i++)
    {
    cout << "Ingrese un numero: ";
    cin >> aux;
    numeros.push_back(aux);
    }

    cout << "Ingrese otro numero: ";
    cin >> numero_s;


    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] == numero_s)
        {
            cout << "El numero " << numero_s << " se repite" << endl;
        }
    }
}

