#include <iostream>

using namespace std;

int main()
{
    char letra;

    cout << "Ingrese una de las siguientes letras para saber el color: R, Y, B, W, K, C y G. \n";
    cin >> letra;

    switch (tolower(letra))
    {
    case 'r':
        cout << "Rojo";
        break;
    case 'y':
        cout << "Amarillo";
        break;

    case 'b':
        cout << "Azul";
        break;
    case 'w':
        cout << "Blanco";
        break;
    case 'k':
        cout << "Negro";
        break;
    case 'c':
        cout << "Cyan";
        break;
    case 'g':
        cout << "Verde";
        break;
    default:
        cout << "Caracter invalido";
        break;
    }
    return 0;
}
