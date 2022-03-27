#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> numeros;
   vector<int> numeros_2;
   vector<int> numeros_3;

   int aux, aux_1;
   string res;

    cout << "Ingrese un numero: ";
    cin >> aux;
    numeros.push_back(aux);

   while (aux != 0)
    {
    cout << "Ingrese un numero: ";
    cin >> aux;
    numeros.push_back(aux);

    cout << "Quiere entrar al 2ndo vector? ";
    cin >> res;

    if (res == "si")
    {
        cout << "Ingrese un numero (V_2): ";
        cin >> aux;
        numeros_2.push_back(aux);

        while (aux != 0)
            {
                cout << "Ingrese un numero (V_2): ";
                cin >> aux;
                numeros_2.push_back(aux);

                cout << "Quiere entrar a la suma de vectores? ";
                cin >> res;
                    if (res == "si")
            {
                if (numeros.size() == numeros_2.size())
                {
                    for (int i = 0; i < numeros.size(); i++)
                    {
                        numeros_3.push_back(numeros[i] + numeros_2[i]);
                        cout << "La suma de los vectores seria: " << numeros_3[i] << endl;

                    }

                }
                else if (numeros.size() != numeros_2.size())
                {
                    cout << "Los vectores no son del mismo tamaño";
                    return 0;
                }
            }
            }
    }
    }
}
