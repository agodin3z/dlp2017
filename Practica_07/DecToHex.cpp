/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numero;

    cout << "Programa para convertir un numero decimal a hexadecimal\n";
    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    switch(numero){
    case 0:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 0\n";
        break;
    case 1:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 1\n";
        break;
    case 2:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 2\n";
        break;
    case 3:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 3\n";
        break;
    case 4:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 4\n";
        break;
    case 5:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 5\n";
        break;
    case 6:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 6\n";
        break;
    case 7:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 7\n";
        break;
    case 8:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 8\n";
        break;
    case 9:
        cout << "El numero decimal "<<numero<<" es en hexadecimal 9\n";
        break;
    case 10:
        cout << "El numero decimal "<<numero<<" es en hexadecimal A\n";
        break;
    case 11:
        cout << "El numero decimal "<<numero<<" es en hexadecimal B\n";
        break;
    case 12:
        cout << "El numero decimal "<<numero<<" es en hexadecimal C\n";
        break;
    case 13:
        cout << "El numero decimal "<<numero<<" es en hexadecimal D\n";
        break;
    case 14:
        cout << "El numero decimal "<<numero<<" es en hexadecimal E\n";
        break;
    case 15:
        cout << "El numero decimal "<<numero<<" es en hexadecimal F\n";
        break;
    default:
        cout << "El numero ingresado no corresponde a la tabla de conversion hexadecimal\n";
        break;
    }
    system("pause");
    return 0;
}
