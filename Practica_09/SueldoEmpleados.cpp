/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    char nombre[50];
    string codigo;
    int respuesta=1;
    float sueldo, sueldoNuevo=0, montoTotal=0;

    cout << "Programa para saber el aumento de sueldo de X empleados\n";

    while(respuesta == 1) {
        cout << "\nIngrese el codigo del trabajador (AA0000): ";
        cin >> codigo;
        cin.ignore(100, '\n'); //Evita que getline() tome como valor el salto de línea.
        cout << "\nIngrese el nombre del trabajador: ";
        cin.getline(nombre,50);
        cout << "\nIngrese el sueldo $";
        cin >> sueldo;

        if(sueldo < 650) {
            sueldoNuevo = (sueldo*0.15) + sueldo;
            montoTotal += sueldoNuevo;
        } else if(sueldo >= 650 && sueldo <= 1000){
            sueldoNuevo = (sueldo*0.12) + sueldo;
            montoTotal += sueldoNuevo;
        } else {
            sueldoNuevo = (sueldo*0.09) + sueldo;
            montoTotal += sueldoNuevo;
        }

        cout << "\nCodigo del trabajador: "<<codigo<<
                "\nNombre: "<<nombre<<
                "\nSueldo: $"<<sueldo<<
                "\nSueldo Nuevo: $"<<sueldoNuevo<<endl;

        cout << "\nDesea ingresar mas empleados?\n1. Si\n2. No\n";
        cin >> respuesta;
        while(respuesta != 1 && respuesta !=2){
            cout << "\nError. Respuesta incorrecta\n"<<
            "Desea ingresar mas empleados?\n1. Si\n2. No"<<endl;
            cin >> respuesta;
        }
    }

    cout << "\nMonto total de la nomina: $"<<montoTotal<<"\n";
    system("pause");
    return 0;
}
