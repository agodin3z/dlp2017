/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int mes;

    cout << "Programa para saber el mes correspondiente segun su numero\n";
    cout << "Ingrese el numero del mes: ";
    cin >> mes;

    switch(mes){
    case 1:
        cout << "El numero "<<mes<<" corresponde al mes de Enero\n";
        break;
    case 2:
        cout << "El numero "<<mes<<" corresponde al mes de Febrero\n";
        break;
    case 3:
        cout << "El numero "<<mes<<" corresponde al mes de Marzo\n";
        break;
    case 4:
        cout << "El numero "<<mes<<" corresponde al mes de Abril\n";
        break;
    case 5:
        cout << "El numero "<<mes<<" corresponde al mes de Mayo\n";
        break;
    case 6:
        cout << "El numero "<<mes<<" corresponde al mes de Junio\n";
        break;
    case 7:
        cout << "El numero "<<mes<<" corresponde al mes de Julio\n";
        break;
    case 8:
        cout << "El numero "<<mes<<" corresponde al mes de Agosto\n";
        break;
    case 9:
        cout << "El numero "<<mes<<" corresponde al mes de Septiembre\n";
        break;
    case 10:
        cout << "El numero "<<mes<<" corresponde al mes de Octubre\n";
        break;
    case 11:
        cout << "El numero "<<mes<<" corresponde al mes de Noviembre\n";
        break;
    case 12:
        cout << "El numero "<<mes<<" corresponde al mes de Diciembre\n";
        break;
    default:
        cout << "El numero ingresado no corresponde a un mes\n";
        break;
    }
    system("pause");
    return 0;
}
