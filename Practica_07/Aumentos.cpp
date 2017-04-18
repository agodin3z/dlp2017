/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int cat;
    float sueldo, sueldoNeto;

    cout << "Programa para calcular el sueldo de un trabajador por categoria\n\n";
    cout << "Ingrese su sueldo $";
    cin >> sueldo;
    cout << "Ingrese el numero de su categoria (1-4): ";
    cin >> cat;

    switch (cat){
    case 1:
        sueldo += sueldo * 0.15;
        cout << "\nSu categoria es "<<cat<<" y recibe un aumento del 15%\nSu nuevo sueldo es $"<<sueldo<<"\n";
        break;
    case 2:
        sueldo += sueldo * 0.1;
        cout << "\nSu categoria es "<<cat<<" y recibe un aumento del 10%\nSu nuevo sueldo es $"<<sueldo<<"\n";
        break;
    case 3:
        sueldo += sueldo * 0.08;
        cout << "\nSu categoria es "<<cat<<" y recibe un aumento del 8%\nSu nuevo sueldo es $"<<sueldo<<"\n";
        break;
    case 4:
        sueldo += sueldo * 0.07;
        cout << "\nSu categoria es "<<cat<<" y recibe un aumento del 7%\nSu nuevo sueldo es $"<<sueldo<<"\n";
        break;
    default:
        cout << "\nEl numero ingresado no pertenece a ninguna categoria\n";
        break;
    }

    system("pause");
    return 0;
}
