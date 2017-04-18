/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float sueldo;
    cout << "Programa para calcular sueldo de un trabajador\n";
    cout << "Ingrese el sueldo del trabajador: $";
    cin >> sueldo;

    if (sueldo < 1000){
        sueldo +=  (sueldo * 0.15);
        cout << "Recibe un aumento del 15%.\n";
    }
    
    cout << "Su sueldo es: $"<<sueldo;

    system("pause");
    return 0;
}
