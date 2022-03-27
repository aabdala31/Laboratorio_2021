#include <iostream>
#include <vector>

using namespace std;

void comparar (vector <int> numeros, int numero, int si = 0)
{
    cout << "Ingrese numero para comparar: ";
    cin >> numero;

    for (int i = 0; i < numeros.size(); i++)
    {
        if (numero == numeros[i])
        {
            si++;
        }
    }
    if (si != 0)
    {
        cout << "true";
    }
    else if (si == 0)
    {
        cout << "false";
    }
}

int main()
{
    vector <int> numeros;
    int aux;

    cout << "Ingrese numero: ";
    cin >> aux;
    numeros.push_back(aux);
    int numero;
    int counter;

    while (counter < 5)
        {
            cout << "Ingrese numero: ";
            cin >> aux;
            numeros.push_back(aux);

                if (aux < numeros [counter])
                    {
                        numeros.push_back(aux);
                    }
                else
                    {
                        cout << "error" << endl;
                        return 0;
                    }
            counter ++;
        }

    comparar (numeros, numero);
}
