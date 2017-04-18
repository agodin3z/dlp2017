/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float sueldo;
    cout << "Programa para calcular salario actual de un obrero basado en el salario anterior\n";
    cout << "Ingrese la cantidad de su sueldo anterior: $";
    cin >> sueldo;

    if (sueldo < 500 || sueldo > 2000){
        cout << "\nNo recibe ningun aumento.\n";
    } else {
        sueldo += (sueldo * 0.25);
        cout << "\nRecibio un aumento del 25% sobre el anterior.\n";
    }
    cout << "Su sueldo actual es: $"<<sueldo<<"\n";
    system("pause");
    return 0;
}
