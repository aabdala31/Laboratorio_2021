#include <iostream>
#include <vector>

using namespace std;

void ordenarYMostrar(vector<int> numeros)
{
    int i, j, a, b;
    for (i = 0; i < numeros.size()-1; i++){
    for (j = 0; j < numeros.size()-1; j++){
        if (numeros[j] > numeros[j+1]){
            int aux = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = aux;
        }
    }
}
    for (int i = 0; i < numeros.size(); i++) cout << numeros[i] << " ";
}

int main()
{
    vector <int> numeros {1,2,2,3,3,3,1,1,1,3,3,3};

    ordenarYMostrar(numeros);
}
