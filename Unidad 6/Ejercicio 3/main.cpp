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
            for (int j = i+1; j < numeros.size(); j++)
            {
                if(numeros[i] < numeros[j])
                {
                    aux_1 = numeros[i];
                    numeros[i] = numeros[j];
                    numeros[j]= aux_1;
                }
            }
        }
    }

    for (int i = 0; i < numeros.size(); i++)
    {
        cout << "[" << numeros [i] << "]";
    }
}
