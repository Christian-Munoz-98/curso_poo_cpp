#include <iostream>

using namespace std;

int main()
{
    char letra = 'A';
    char *puntero = &letra;

    cout << "letra = " << letra << endl;
    cout << "*puntero = " << *puntero << endl;
    cout << "&letra = " << (int *) &letra << endl; //convertir la direccion de memoria a entero
    cout << "puntero = " << (int *)puntero;
}