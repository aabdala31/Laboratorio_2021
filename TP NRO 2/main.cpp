#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void registrarUsuario(string ID,int &vidas, int &puntuacion) //funcion del usuario
{
    string aux;
    ifstream file;
    ofstream fileW;

    file.open(ID+".txt"); //abrimos un .txt con el nombre del usuario


    if(file.is_open()) // nos fijamos si hay un .txt con el nombre del usuario
    {
        string linea;
        string aux;
            for(int i = 0; i < 2; i++) // leemos las lineas hasta encontrar la coma, es decir, se ecuentra en el .txt el nombre y las vidas del usuario.
            {
                getline(file, aux, ',');
                if(i == 0)
                {
                    ID = aux; //definimos que el nombre de usuario(ID) sea igual a la primera oracion que se encuentre antes de la coma
                }
                else if(i == 1)
                {
                    vidas = stoi (aux); //utilizamos stoi() para poner el valor de STRING (aux) en un INT (vidas)
                }
            }
            getline(file, aux); // leemos lo que falta de la línea, es decir, la puntuacion
            puntuacion = stoi (aux); //utilizamos stoi() para poner el valor de STRING (aux) en un INT (puntuacion)

            cout << "Bienvenido "<< ID << endl;
            cout << "Tus vidas son: " << vidas << endl;
        }
        else // si no hay un .txt con el nombre del usuario
        {
            fileW.open(ID+".txt"); //creamos un .txt con el nombre del usuario
            vidas = 3; // como es la primera vez que el usuario decide jugar, le regalamos 3 vidas, es decir, vidas = 3
            puntuacion = 0;

            fileW << ID; //escrbimos en el txt el nombre de usuario
            fileW << ","; //separamos por comas
            fileW << vidas; //escribimos en el txt el valor de la vida
            fileW << ","; // separamos por comas
            fileW << puntuacion << endl; //escribimos en el txt el valor de la puntuacion

            cout << "Bienvenido al juego, "<< ID << " te regalamos " << vidas << " vidas por unirte al juego " << endl;
            cout << "Tus vidas son: " << vidas << endl;

            fileW.close();

        }


    file.close();
}

void swapI(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

void swapS(string &a, string &b)
{
    string aux = a;
    a = b;
    b = aux;
}

void mejores(int Mejorpuntuacion, string ID, int &puntuacion)
{
    vector <string> nombre; // este vector sirve para almacenar todos los nombres de los jugadores
    vector <int> punt; // creamos este vector para almacenar todas las puntuaciones de los jugadores

    ifstream file;
    ofstream fileW;
    string a = "vacio"; // este string sirve para cuando el archivo recien se crea y no hya ningun jugador en esa posicion
    int b = 0; // puntuacion cuando recien se crea el .txt y no hay ninguna punutacion
    string linea,aux;
    int counter = 0;

    file.open("mejores.txt");

    if(file.is_open())
    {
        for(int j = 0; j < 3; j++)
        {
            getline(file, aux, ' ');  //recorre los nombres de los jugadores
            if(aux != "") //si el string no esta vacio, es decir hay nombres de jugadores
            {
                nombre.push_back(aux); //guarda el nombre de estos en un vector
                getline(file, linea, ' '); //recorre hasta la puntuacion de UN jugador
                if(linea.size() > 0) //si el tamaño de linea supera a 0, es decir, contiene algo
                {
                   int puntMejores = stoi (linea); // pasa la puntuacion a un int
                    punt.push_back(puntMejores); // el vector guarda la puntuacion
                }
            }
        }
    file.close();
    }
    else{ //si no existe el archivo
        fileW.open("mejores.txt"); // se crea el archivo
        fileW.close();
        for(int i = 0; i < 3; i++)
        {
            nombre.push_back(a); // ponemos en el vector el string vacio para tener algo para comparar
            punt.push_back(b); //  ponemos en el vector el int vacio para tener algo para comparar en un futuro
        }
    }
    nombre.push_back(ID); //guardamos el nombre del jugador que esta jugando actualmente para compararlo con los 3 mejores jugadores del juego
    punt.push_back(puntuacion); //guardamos la puntuacion del jugador que esta jugando actualmente para compararlo con las 3 mejores puntuaciones del juego

    fileW.open("mejores.txt");
    if(fileW.is_open())
    {
        for (int j = 0; j < punt.size() -1; j++) // hacemos un for con un contador que sea menor al tamaño del vector que contiene la puntuacion - 1, este -1 lo utilizamos para no hacer la iteracion del mejor jugador n4 y que no lo escriba en el .txt
        {
            for (int i = j + 1; i < punt.size(); i++) //este for sirve para hacer la iteracion de la posicion que tiene el vector en j y comparlos con las otras posiciones del vector, por eso i = j + 1.
            {
                if (punt[i] > punt[j]){ // si en la posicion del vector donde se encuentra i, es mayor a la posicion de j
                    swapI(punt[j], punt[i]); //cambiamos la posicion entre estos
                    swapS(nombre[j], nombre[i]); // lo mismo aca, pero intercambiamos los nombres
                }
            }
            cout << nombre[j] << ", " << punt[j] << endl;

            fileW << nombre[j] << " " << punt[j] << " "; // escribimos, separando por espacios, la mejor puntuacion.

        }
    }

    fileW.close();

    cout << " " << endl;
    return;
}

void p_1(string ID, int &vidas, int &puntuacion, int &cont)
{
    cont++;
    int counter = 0;
    ifstream file; //lee el txt de preguntas y respuestas
    ofstream fileW; //escribe dentro del txt del usuario su nuevo puntaje y cuantas vidas gano/perdio
    ofstream fileMejores; //escribe dentro del txt la puntuacion y nombre del usuario. Para luego, comparar con la puntuacion con otros usuarios
    string preg;
    string answ;
    char rta;
    string nombreArchivo = to_string(cont) + ".txt";
    file.open(nombreArchivo); //abrimos el archivo de lectura de las preguntas y respuestas

    if(file.is_open())
    {
        for(int i = 1; i < 11; i++)
        {
            getline(file, preg); //lee las lineas de las preguntas y las escribe en consola
            cout << i << ". " << preg << endl;

            for(int c = 1; c < 5; c++) // loop para escribir las opciones de las preguntas
            {
                getline(file, answ, ' '); //lee las opciones
                char letra = 96 + c; //creamos este char para que imprima la letra de cada opcion (a,b,c y d)
                cout << "   " << letra << ". " << answ << endl;
            }

            cout << " " << endl;
            cout << "Ingrese su respuesta: ";
            cin >> rta; //repuesta del usuario a la pregunta
            getline(file, answ); //lee lo que queda de la linea de respuestas, es decir, la opcion correcta que tendria que haber ingresado el usuario

            if(answ[0] == rta)// si el primer caracter de answ (opcion correct) es igual a la que ingreso el usuario
            {
                cout << " " << endl;
                cout << "Respuesta correcta" << endl << endl;
                if(i <= 5) //si contador i es igual o menor a 5, se le suma 1 a la puntuacion
                {
                    puntuacion = puntuacion + 1;
                }
                else if(i > 5) //sino, se le suma 3
                {
                    puntuacion = puntuacion + 3;
                }
                counter++; //sirve para fijarse cuantas veces acerto el usuario, para más tarde, ver si se le tiene que dar una vida o no
            }
            else //sino es igual la opcion correcta con la que ingreso el usuario
            {
                if(i <= 5) // si la respuesta mal respondida está entre 1 y 5
                {
                    if(vidas == 0) // si vidas = 0, se termina el juego
                    {
                        fileW.open(ID+".txt"); //abrimos el txt del jugador para ingresar las vidas que perdio y los puntos que gano
                        if(fileW.is_open())
                        {
                            fileW << ID;
                            fileW << ",";
                            fileW << vidas;
                            fileW << ",";
                            fileW << puntuacion << endl;
                        }
                        fileW.close();

                        cout << "--------------------------------- GAME OVER!!!!!! ---------------------------------" << endl;
                        return;
                    }
                    else //si vidas no es 0
                    {
                        cout << "Respuesta incorrecta, la correcta era " << answ << endl << endl; // la consola te muestra la respuesta correcta al usuario
                        string respuestaM;
                        cout << "Desea seguir jugando? (si / no) "; // y le pregunta si quiere seguir jugando
                        cin >> respuestaM;

                        if(respuestaM == "si") //si el usuario quiere seguir jugando
                        {
                            vidas = vidas -1; // se le resta una vida, y sigue con el juego
                            cout << "Le quedan " << vidas << " vidas" << endl;
                        }

                        else //si dice que no
                        {
                            fileW.open(ID+".txt"); //abrimos el txt del jugador para ingresar los puntos que gano
                            if(fileW.is_open())
                            {
                                fileW << ID;
                                fileW << ",";
                                fileW << vidas;
                                fileW << ",";
                                fileW << puntuacion << endl;
                            }
                            fileW.close();
                            exit(-1); // se cierra el programa
                        }
                    }
                }

                else if(i > 5) // si la respuesta mal respondida esta entre 6 y 10
                {
                    fileW.open(ID+".txt"); //abrimos el txt del jugador para ingresar las vidas que perdio y los puntos que gano
                    if(fileW.is_open())
                    {
                        fileW << ID;
                        fileW << ",";
                        fileW << vidas;
                        fileW << ",";
                        fileW << puntuacion << endl;
                    }
                    fileW.close();
                    cout << "Respuesta incorrecta, la correcta era " << answ << endl << endl;
                    cout << "--------------------------------- GAME OVER!!!!!! ---------------------------------" << endl; //y se cierra el juego
                    return;
                }
            }
        }
        cout << " " << endl << endl;
    }
    if(counter == 10) //si el usuario respondio todas las preguntas bien
    {
        cout << "Como respondio todas las vidas bien, le regalamos 1 vida" << endl;
        vidas = vidas + 1; // se le suma una vida
    }
    file.close();

    fileW.open(ID+".txt"); //abrimos el txt para ingresar los puntos que gano y las vidas que gano/perdio el usuario

    if(fileW.is_open())
    {
        fileW << ID;
        fileW << ",";
        fileW << vidas;
        fileW << ",";
        fileW << puntuacion << endl;
    }

    fileW.close();

    fileMejores.open("mejores.txt", ios::app); //abrimos el txt de los mejores jugadores e insertamos en una nueva linea de codigo el ID y la puntuacion de los jugadores

    if(fileMejores.is_open())
    {
        fileMejores << ID;
        fileMejores << ",";
        fileMejores << puntuacion << endl;
    }

    fileMejores.close();

    if(cont >= 4)
    {
        cont = 0;
    }

}

void menu(string rta, string ID, int &cont, int &vidas, int &puntuacion) //funcion del menu, es de tipo int ya que si el usuario elige la opcion 4(Salir), se cierra el programa
{
    int puntMejores;
    int menuRta;

    cout << "Que quiere hacer? " << endl;
    cout << "1. Jugar" << endl; //opciones
    cout << "2. Ver su puntaje actual en el juego" << endl; //opciones
    cout << "3. Ver los 3 mejores jugadores en el juego" << endl; //opciones
    cout << "4. Salir" << endl << endl; //opciones
    cin >> menuRta;

    if(menuRta == 1)
    {
        cout << "--- Ha elegido jugar ---" << endl << endl;
        p_1(ID, vidas, puntuacion, cont);
        return;
    }
    else if(menuRta == 2)
    {
        cout << "--- Ha elegido ver su puntuacion ---" << endl << endl;

        ifstream file;
        string aux;

        file.open(ID+".txt");

        if(file.is_open())
        {
            for(int i = 0; i < 2; i++)
            {
                getline(file,aux,',');
            }
            file >> aux;
            cout << "Su puntuaje actual es: " << aux << endl << endl;
           return;
        }

    }
    else if(menuRta == 3)
    {
        cout << "--- Ha elegido ver los 3 mejores jugadores en el juego ---" << endl << endl;
        mejores(puntMejores, ID, puntuacion);
        return;

    }
    else if(menuRta == 4)
    {
        exit(-1);
    }
    else
    {
        cout << "ERROR!!! comando incorrecto" << endl << endl << endl;
        menu(rta, ID, cont, vidas, puntuacion);
    }
}

int main()
{
    int cont = 0;
    int vidas, puntuacion;
    string ID;
    string rta, rta2;
    cout << "---- BIENVENIDO AL JUEGO ----" << endl << endl;

    cout << "Ingrese su alias para jugar: ";
    cin >> ID;

    registrarUsuario(ID, vidas, puntuacion);
    menu(rta,ID,cont, vidas, puntuacion);


    cout << "Queres volver al menu? ";
    cin >> rta2;


    while(true)
    {
      if(rta2 == "si")
        {
            cout << " " << endl;
            menu(rta,ID,cont,vidas,puntuacion);
        }
        else if(rta2 == "no")
        {
            return 0;
        }
    }

}
