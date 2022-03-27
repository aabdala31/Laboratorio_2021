#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Introduzca un numero: ";
    cin >> num;

    if ( num > 0  &&  num  < 4 ){

        cout << "Tu numero es correcto";

    }
    else if ( num > 6  &&  num  < 10 ){

        cout << "Tu numero es correcto";

    }

    else {

        cout << "Tu numero no es correcto";

    }

}
