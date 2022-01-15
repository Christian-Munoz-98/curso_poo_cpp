#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class Animal 
{ 
protected:
    static int numero_animales;
    string alimento="algo";

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
        cout << "Este animal esta comiendo " << alimento << "... nom nom" << endl;
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

class Herviboro : public Animal
{
public:
    Herviboro() : Animal()
    {
        this->alimento = "plantas";
    }

    void pastar()
    {
        cout << "Este animal esta pastando.." << endl;
    }
};

class Carnivoro : public Animal
{
public:
    Carnivoro() : Animal()
    {
        this->alimento = "carne";
    }

    void cazar()
    {
        cout << "Este animal esta esta cazando..." << endl;
    }
};

class Omnivoro : public Herviboro, public Carnivoro
{
public:
    Omnivoro() : Herviboro(), Carnivoro() {}
    void comer()
    {
        cout << "Este animal come lo que sea.." << endl;
    }
};


int main()
{
    setlocale(LC_ALL,"spanish");

    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o = new Omnivoro();

    cout<< "Numero de Animales: "<< Animal::obtenerNumeroAnimales() << endl;

    a->comer();
    
    h->pastar();
    h->comer();

    c->cazar();
    c->comer();

    o->comer();

    cout << "omnivoro" << endl;
    o->Herviboro :: comer();
    cout << "omnivoro" << endl;
    o->Carnivoro :: comer();

    delete a;

    cout<< "Numero de Animales: "<< Animal::obtenerNumeroAnimales()<< endl;
}