#include <iostream>
#include <vector>

using namespace std;

void ordenar (vector <int> numeros)
{
    int aux;

    for (int i=0; i<numeros.size()-1; i++)
    {
        for (int j=i+1; j<numeros.size(); j++)
        {
            if(numeros[i]>numeros[j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

}

bool comparar (vector <int> numeros, int aux)
{
    int men = 0;
    int may = numeros.size()-1;

    while (men + 1 != may && numeros[may] < aux)
    {
        int mid = (may + men)/2;
        if (numeros[mid] == aux) return true;
        else if (numeros[mid] < aux) may = mid;
        else men = mid;
    }

    return numeros[may] == aux || numeros[men] == aux;
}

int main()
{
    vector <int> numeros;
    int aux;
    int numero;
    int counter;

    cout << "Ingrese numero: ";
    cin >> aux;
    numeros.push_back(aux);

    while (counter < 5)
        {
            cout << "Ingrese numero: ";
            cin >> aux;
            numeros.push_back(aux);

                if (aux < numeros [counter])
                    {
                        numeros.push_back(aux);
                    }

            counter ++;
        }

    ordenar (numeros);

    cout << "Ingrese un numero: ";
    cin >> aux;

    if (comparar (numeros, aux))
        cout << "El numero "<< aux <<" esta";

    else
        cout << "El numero " << aux << " no esta";

}

