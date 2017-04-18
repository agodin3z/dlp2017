/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int respuesta=2, color;
    float compra, total=0, totalVentas=0;

    cout << "Programa para calcular el descuento de compra de los clientes.\n";

    while(respuesta == 2) {
        cout << "\nIngrese el total de compra: $";
        cin >> compra;
        cout << "Ingrese el numero segun el color de la bolita:\n"<<
                "1- Roja\n"<<
                "2- Amarilla\n"<<
                "3- Blanca"<<endl;
        cin >> color;

        switch(color){
        case 1:
            total = compra - (compra*0.4);
            cout << "\nRecibe un descuento del 40%";
            break;
        case 2:
            cout << "\nRecibe un descuento del 25%";
            total = compra - (compra*0.25);
            break;
        default:
            cout << "\nNo recibe descuento, Gracias por participar!";
            total = compra;
            break;
        }
        totalVentas += total;
        cout << "\nEl total a pagar es $"<<total<<"\n";

        cout << "\nCerrara ya la tienda?\n1. Si\n2. No\n";
        cin >> respuesta;
        while(respuesta != 1 && respuesta !=2){
            cout << "\nError. Respuesta incorrecta\n"<<
            "Cerrara ya la tienda?\n1. Si\n2. No"<<endl;
            cin >> respuesta;
        }
    }

    cout << "\nTotal de ventas del dia: $"<<totalVentas<<"\n";
    system("pause");
    return 0;

}
