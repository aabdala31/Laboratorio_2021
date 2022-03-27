#include <iostream>

using namespace std;

int main()
{
    int n;
    int n_1;

  cout << "Introduzca un numero entero: ";
  cin >> n;

    if(n < 0){

        n = n * (-1);

    }

    n_1 = n % 2;


    if (n_1 == 1){

    cout << "Es impar";
    }
    else if (n_1 == 0){

        cout << "Es par";
    }

    if (n == 0){

    cout << "Es par";
    }
    else if (n == 1){

        cout << "Es impar";
    }
}
