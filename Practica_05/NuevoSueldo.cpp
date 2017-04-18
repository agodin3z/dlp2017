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
        cout << "\nRecibe un aumento del 15%.\n";
    }else{
        sueldo +=  (sueldo * 0.12);
        cout << "\nRecibe un aumento del 12%.\n";
    }
    cout << "\nSu nuevo sueldo es: $"<<sueldo<<"\n";
    system("pause");
    return 0;
}
