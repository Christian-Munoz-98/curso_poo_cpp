#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    string nombre = "Christian";
    int edad = 23;

    void saludar()
    {
        cout << "Hola me llamo " << nombre << endl;
    }
};

int main()
{
    Persona p = Persona();
    Persona *p2 = new Persona();

    p2->nombre = "Ximena";
    p2->edad = 45; 

    p.saludar();
    cout << "Tengo "<< p.edad << " años" << endl;

    //Punteros
    
    p2->saludar();
    cout << "Tengo " << p2->edad << " años" << endl;


}