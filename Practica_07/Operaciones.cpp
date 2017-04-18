/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float num1, num2, suma, resta, multiplicacion, division;
    int operacion;
    cout << "Programa para operar dos numeros\n";
    cout << "\nIngrese el primer numero ";
    cin >> num1;
    cout << "Ingrese el segundo numero ";
    cin >> num2;
    cout << "Programa para operar dos numeros\n";
    cout << "Que operacion desea realizar?\n"<<
            "1- Suma\n"<<
            "2- Resta\n"<<
            "3- Multiplicacion\n"<<
            "4- Division\n"<<endl;
    cin >> operacion;

    switch (operacion){
    case 1:
        suma = num1 + num2;
        cout << "\nEl resultado de la suma: "<<num1<<" + "<<num2<< " es igual a "<<suma<<"\n";
        break;
    case 2:
        resta = num1 - num2;
        cout << "\nEl resultado de la resta: "<<num1<<" - "<<num2<< " es igual a "<<resta<<"\n";
        break;
    case 3:
        multiplicacion = num1 * num2;
        cout << "\nEl resultado de la multiplicacion: "<<num1<<" * "<<num2<< " es igual a "<<multiplicacion<<"\n";
        break;
    case 4:
        division = num1 / num2;
        cout << "\nEl resultado de la division: "<<num1<<" / "<<num2<< " es igual a "<<division<<"\n";
        break;
    default:
        cout << "\nLa opcion elegida no corresponde a ninguna operacion\n";
        break;
    }
    system("pause");
    return 0;
}
