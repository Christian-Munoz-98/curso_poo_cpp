#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Uniones
    union num_char {
        int numero;
        char letra;
    };
    
    num_char x = {'A'};
    
    cout << "X como un numero: " << x.numero << endl;
    cout << "X como una letra: " << x.letra << endl;
    
    //Enumeraciones
    enum dias_semana {lunes = 'L', martes = 'M', miercoles = 'I', jueves = 'J', viernes = 'V'};

    dias_semana dia = martes;

    cout << (char) dia;
}