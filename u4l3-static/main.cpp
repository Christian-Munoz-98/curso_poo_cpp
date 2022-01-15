#include <iostream>
#include <string>

using namespace std;

class Persona {
    
private:
    string nombre;
    int edad;

public:
    static int numero_personas;

    Persona(string nombre, int edad);

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

    void saludar();
};

int Persona :: numero_personas = 0;

void Persona :: saludar()
{
    cout << "Hola me llamo " << nombre << " y tengo "<< edad << " anos" << endl;
}

Persona :: Persona(string nombre, int edad)
{
    this -> nombre = nombre;
    this -> edad = edad;
    numero_personas +=1;
}

int main()
{
    Persona *p = new Persona("Diana",26);
    Persona *p2 = new Persona("Ximena",23);
    Persona *p3 = new Persona("Jose",50);
    Persona *p4 = new Persona("Pedro",48);

    p->saludar();
    p2->saludar();
    p->actualizar_nombre("Christian").actualizar_edad(45).actualizar_nombre("Jose").actualizar_edad(67);
    p->saludar();

    cout << "Contador de personas: " << Persona::numero_personas << endl;
}