#include <iostream>
#include <string>

using namespace std;

class Persona {
    
private:
    string nombre;
    int edad;

public:

    Persona(string nombre, int edad)
    {
        this -> nombre = nombre;
        this -> edad = edad;
    }

    ~Persona()
    {
        cout << "destructor" << endl;

    }

    Persona &actualizar_nombre(string nombre)
    {
        this->nombre = nombre;
        return *this;
    }

    Persona &actualizar_edad(int edad)
    {
        this->edad= edad;
        return *this;
    }

    Persona &saludar()
    {
        cout << "Hola me llamo " << nombre << " y tengo "<< edad << " anos" << endl;
        return *this;
    }
};

int main()
{
    Persona *p = new Persona("Diana",26);
    Persona *p2 = new Persona("Ximena",23);

    p->saludar();
    p2->saludar();
    p->actualizar_nombre("Christian").actualizar_edad(45).saludar().actualizar_nombre("Jose").actualizar_edad(67).saludar();
}