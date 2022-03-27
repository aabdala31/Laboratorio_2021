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

    for (int i = 0; i < 4; i++)
    {
    cout << "Ingrese un numero: ";
    cin >> aux;
    numeros.push_back(aux);
    }

        for (int i = 0; i < numeros.size(); i++)
            {
                    if (numeros[i] > numeros[i + 1])
                    {
                        cout << "El vector NO esta ordenado acendentemente";
                        return 0;
                    }
                    else
                    {
                        cout << "El vector esta ordenado acendentemente";
                        return 0;
                    }

            }

    }

