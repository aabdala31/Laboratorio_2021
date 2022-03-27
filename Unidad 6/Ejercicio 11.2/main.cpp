#include <iostream>
#include <vector>

using namespace std;

void ordenarYMostrar(vector<int> numeros)
{

    for (int i = 0; i < numeros.size()-1; i++){

        if (numeros[i] == 1)
        {
            int aux = numeros[i];
            numeros[i] = numeros[0];
            numeros[0] = aux;
        }

        else if (numeros[i] == 3)
        {
            int aux = numeros[i];
            numeros[i] = numeros[numeros.size()-1];
            numeros[numeros.size()-1] = aux;
        }

}
    for (int i = 0; i < numeros.size(); i++) cout << numeros[i] << " ";
}

int main()
{
    vector <int> numeros {2,3,3,1};

    ordenarYMostrar(numeros);
}
