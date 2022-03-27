#include <iostream>
#include <vector>

using namespace std;

struct punto {

    int x;
    int y;

};

bool par_iguales (vector<punto> puntos){
    for(int i = 0; i < puntos.size(); i++){
        for(int j = i+1; j < puntos.size(); j++){

         if(puntos[i].x == puntos[j].x && puntos[i].y == puntos[j].y) return true;

        }
    }
    return false;
}

int main()
{
   punto p1, p2, p3;

   p1.x = 10;
   p1.y = 10;

   p2.x = 15;
   p2.y = 20;

   vector<punto> puntos;
   puntos.push_back(p1);
    puntos.push_back(p2);
    puntos.push_back(p1);
   par_iguales(puntos);

   return 0;
}
