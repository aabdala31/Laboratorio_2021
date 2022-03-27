#include <iostream>
#include <vector>

using namespace std;

void swap_1 (vector <float> numeros)
{
    for (int i = 1; i < numeros.size() + 1; i++)
    {
        float aux;
        cout << "[" << numeros [numeros.size() - i] << "]";
    }
}

int main()
{
    vector <float> numeros;
    float aux;

    cout << "Ingrese numero: ";
    cin >> aux;
    numeros.push_back(aux);

    while (aux != 0)
    {
        cout << "Ingrese numero: ";
        cin >> aux;
        numeros.push_back(aux);
    }

    swap_1(numeros);
}
