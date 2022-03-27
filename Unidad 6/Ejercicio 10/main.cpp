#include <iostream>
#include <vector>

using namespace std;

void buscar(vector<int> numeros, vector<int> numeros_2, vector<int> numeros_3)
{
    for (int i = 0; i < numeros.size(); i++)
        for (int j = 0; j < numeros_2.size(); j++)
            if (numeros_2[i] == numeros[j])
                for (int a = 0; a < numeros_3.size(); a++)
                    if (numeros_3[a] == numeros_2[i])
                        {
                            cout << "Vector 1: " << i << endl;
                            cout << "Vector 2: " << j << endl;
                            cout << "Vector 3: " << a << endl;
                            exit (-1);
                        }

}

int main()
{
    vector <int> numeros {1,3,4};
    vector <int> numeros_2 {3,5,7};
    vector <int> numeros_3 {1,2,3};

    buscar (numeros, numeros_2, numeros_3);
}
