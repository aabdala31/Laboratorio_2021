#include <iostream>

using namespace std;

int main()
{
    string pal;
    int counter = 0;
    int mayus = 0;
    int minusc = 0;
    int u_letra = pal [pal.size()];

    cout << "Ingrese palabra: ";
    cin >> pal;

    while (counter < u_letra){
        if ( pal [counter] >= 65 && pal [counter] <= 90 ){
            mayus = mayus + 1;
            } else if (pal [counter] >= 92 && pal [counter] <= 122){
                minusc = minusc + 1;
            }
    counter = counter + 1;
    }

    cout << "las mayusculas: " << mayus << endl;
    cout << "las minusculas: " << minusc << endl;
}
