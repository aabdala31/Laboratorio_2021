#include <iostream>

using namespace std;

struct especimen{

    bool respira_a;
    int cant_ojos;

};

int main()
{

    vector <especimen> e = {e1, e2, e3, e4, e5, e6, e7, e8, e9, e10};
    bool b;
    string aux;

    for (int i = 1; i < 11; i++){

        string aux = "e" + to_string(i);

        cout << "Respira aire? (" << i << "): ";
        cin >> b;


        cout << "Cantidad de ojos (" << i << "): ";
        cin >> e1.cant_ojos;

    }

}
