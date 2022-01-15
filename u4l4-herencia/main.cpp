#include <iostream>
#include <string>

using namespace std;

class Animal 
{ 
private:
    static int numero_animales;
    string alimento;

public:

    Animal();
    ~Animal();
    static int obtenerNumeroAnimales();
    
    string obtenerAlimento()
    {
        return alimento;
    };

    void comer()
    {
        cout << "Este animal está comiendo" << alimento << "... ñom ñom" << endl;
    };
};

int Animal::numero_animales=0;

Animal::Animal()
{
    cout << "Creando nuevo animal..."<< endl;
    numero_animales +=1;
}

Animal::~Animal()
{    
    cout << "Borrando Animal..." << endl;
    numero_animales -=1;
}

int Animal::obtenerNumeroAnimales()
{
    return numero_animales;
}

int main()
{
    Animal *a = new Animal();

    cout<< "Numero de Animales: "<< Animal::obtenerNumeroAnimales() << endl;

    a->comer();

    delete a;

    cout<< "Numero de Animales: "<< Animal::obtenerNumeroAnimales()<< endl;
}
