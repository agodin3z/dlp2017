/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int respuesta=1, cantidad=0;
    float precio, producto=0, total=0;

    cout << "Programa para calcular el total de compra.\n";

    while(respuesta == 1) {
        cout << "\nIngrese el precio del producto: $";
        cin >> precio;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        producto = precio*cantidad;
        total += producto;

        cout << "\n"<<cantidad<<" unidades del producto a $"<<precio<<" es: $"<<producto;

        cout << "\nDesea calcular mas productos?\n1. Si\n2. No\n";
        cin >> respuesta;
        while(respuesta != 1 && respuesta !=2){
            cout << "\nError. Respuesta incorrecta\n"<<
            "Desea calcular mas productos?\n1. Si\n2. No"<<endl;
            cin >> respuesta;
        }
    }

    cout << "\nCosto total de los productos: $"<<total<<"\n";
    system("pause");
    return 0;

}
