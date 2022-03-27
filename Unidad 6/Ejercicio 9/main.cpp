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
    vector <int> numeros {1,4,7,10};
    vector <int> numeros_2 {2,5,6,8};

    for (int k=0; k < numeros_2.size(); k++) numeros.push_back(numeros_2[k]);

    ordenarYMostrar(numeros);
}
