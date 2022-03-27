#include <iostream>

using namespace std;

int main()
{

//----------------------------------------------------------------------------------------

    string pal_m,menu;


        cout << "--- Que desea hacer, Encriptar, Desencriptar o Salir? --- ";
        cin >> pal_m;

        for(int i = 0; i < pal_m.size(); i++)
        {
            int l = pal_m[i];

            if(l >= 97 && l <= 122)
            {
                pal_m[i] = pal_m[i] - 32;
            }
        }

//----------------------------------------------------------------------------------------

        if (pal_m == "ENCRIPTAR" ){

        cout << "---- Modo: Encriptar ----" << endl;

        string pal;
        int num;

        cout << "Ingrese la palabra a encriptar (en minusculas): ";
        cin >> pal;

        cout << "Ingrese el numero de desplazamiento: ";
        cin >> num;


        if (num > 0 ){

        for ( int cont = 0; cont < pal.size(); cont++ ){

            if (pal[cont] == '_') {                                 //(ESPACIOS)

                char car;
                car = pal[cont];

                            if(car == '_'){
                                car = ' ';
                                pal[cont] = car;

                                }
                    }                                               //(ESPACIOS)

            pal[cont] = pal [cont] - 32;


            if (pal [cont] >= 65 && pal [cont] <= 90){

                pal [cont] = pal [cont] + num;

                    if (pal [cont] > 90){

                        pal [cont] =  pal [cont] - 90;
                        pal [cont] = pal [cont] + 64;
                        pal [cont] = pal [cont] ;

                    }
                    }
                    cout << pal [cont];

        }
        }
        else if (num <= 0){

            cout << "Codigo incorrecto." << endl;
            main();

        }

//----------------------------------------------------------------------------------------


    } if (pal_m == "DESENCRIPTAR"){

        cout << "---- Modo: Desencriptar ----" << endl;

        string pal_1;
        int num_1;

        cout << "Ingrese la palabra a desencriptar (en minusculas): ";
        cin >> pal_1;

        cout << "Ingrese el numero de desplazamiento: ";
        cin >> num_1;


        if (num_1 > 0) {

        for ( int cont_1 = 0; cont_1 < pal_1.size(); cont_1++ ){

                if (pal_1[cont_1] == '_') {                               //(ESPACIOS)

                char car_1;
                car_1 = pal_1[cont_1];

                            if(car_1 == '_'){
                                car_1 = ' ';
                                pal_1[cont_1] = car_1;

                                }
                    }                                                     //(ESPACIOS)


            pal_1[cont_1] = pal_1 [cont_1] - 32;

            if (pal_1 [cont_1] >= 65 && pal_1 [cont_1] <= 90){


                pal_1 [cont_1] = pal_1 [cont_1] - num_1;

                 if (pal_1 [cont_1] < 65){

                    pal_1 [cont_1] =  pal_1 [cont_1] + 90;
                    pal_1 [cont_1] = pal_1 [cont_1] - 64;
                    pal_1 [cont_1] = pal_1 [cont_1] ;


                    }
                    }

                    cout << pal_1 [cont_1];
        }
        }
        else if (num_1 <= 0){

            cout << "Codigo incorrecto." << endl;
            main();
    }
    }

//----------------------------------------------------------------------------------------

    if (pal_m == "SALIR"){

        cout << "Programa terminado exitosamente."<< endl;
        return 0;

    }

//----------------------------------------------------------------------------------------

        string volver;

        cout << endl <<"Quiere volver al menu principal? (si/no): ";
        cin >> volver;

         for(int i = 0; i < volver.size(); i++){
            int l = volver[i];

            if(l >= 97 && l <= 122)
            {
                volver[i] = volver[i] - 32;
            }
        }
        if(volver == "SI"){

            main();

        }else if(volver == "NO"){

            cout << " - Programa terminado exitosamente - ";
            return 0;

        }else {

            cout << "Comando Incorrecto.";

        }
}
