#include <iostream>
#include <string>

using namespace std;

struct persona
{
    string nombre;
    int edad;
};


int main()
{
    //persona p = persona(); Memoria estatica
    persona *p = new persona(); //Memoria Dinámica

    p->nombre = "Christian";
    p->edad = 23;

    cout << p->nombre << " Tiene " << p->edad << " Anos" << endl;
    cout << (int *) p << endl;
    cout << (int *) &p->nombre << endl;
    cout << (int *) &p->edad << endl;

}