#include <iostream>
#include <vector>

using namespace std;

struct hola{

    vector <int> aj;

};

int main()
{
    hola a;
    a.aj.push_back(35);

    cout << a.aj[0];

}
