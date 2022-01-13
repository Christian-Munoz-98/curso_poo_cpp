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
    //persona *p = new persona();

    persona p = persona();
    p.nombre = "Christian";
    p.edad = 23;

    cout << p.nombre << " Tiene " << p.edad << " Anos" << endl;
}