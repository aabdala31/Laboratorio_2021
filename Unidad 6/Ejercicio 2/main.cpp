#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> numeros;
   int aux, aux_1;

    cout << "Ingrese un numero: ";
    cin >> aux;
    numeros.push_back(aux);

   while (aux != 0)
    {
    cout << "Ingrese un numero: ";
    cin >> aux;
    numeros.push_back(aux);
    }

    if (aux == 0)
    {
        for (int i = 0; i < numeros.size(); i++)
            {
                cout << "[" << numeros [i] << "]" << endl;
            }
    }
}


