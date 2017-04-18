/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int modelo;
    float precio;

    cout << "Programa para saber el valor final de un vehiculo en base a su modelo\n\n";
    cout << "Ingrese el precio del vehiculo: $";
    cin >> precio;
    cout << "Ingrese el numero que corresponde al modelo de su vehiculo:\n"<<
            "1- Cultas\n"<<
            "2- Cabalier\n"<<
            "3- Chevy\n"<<
            "4- Century\n"<<endl;
    cin >> modelo;

    switch (modelo){
    case 1:
        precio -= precio * 0.08;
        cout << "\nEl valor final que debe pagar por el vehiculo modelo Cultas es de $"<<precio<<"\n";
        break;
    case 2:
        precio -= precio * 0.05;
        cout << "\nEl valor final que debe pagar por el vehiculo modelo Cabalier es de $"<<precio<<"\n";
        break;
    case 3:
        precio -= precio * 0.06;
        cout << "\nEl valor final que debe pagar por el vehiculo modelo Chevy es de $"<<precio<<"\n";
        break;
    case 4:
        precio -= precio * 0.09;
        cout << "\nEl valor final que debe pagar por el vehiculo modelo Century es de $"<<precio<<"\n";
        break;
    default:
        cout << "\nEl numero ingresado no pertenece a ningun modelo\n";
        break;
    }
    system("pause");
    return 0;
}
