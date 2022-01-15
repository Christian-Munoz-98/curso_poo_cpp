#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    Persona(string n, int e)
    {
        nombre = n;
        edad = e;
    }
    ~Persona()
    {
        cout << "destructor" << endl;
    }
    void saludar()
    {
        cout << "Hola me llamo " << nombre << " y tengo "<< edad << " anos" << endl;
    }
};

int main()
{
    Persona *p = new Persona("Diana",26);
    Persona *p2 = new Persona("Ximena",23); 

    p->saludar();
    p2->saludar();

}