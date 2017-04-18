/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float num1, num2, num3;
    cout << "Programa para saber cual es el menor de tres numeros\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if (num1 < num2 && num1 < num3){
        cout << "El menor de los numeros introducidos es el primero: "<<num1<<"\n";
    } else if (num1 == num2 && num1 == num3){
        cout << "Todos los numeros introducidos son iguales: "<<num1<<"\n";
    } else if (num1 == num2 && num1 < num3){
        cout << "El primer y segundo numero introducido son iguales: "<<num1<<" y es menor que el tercero\n";
    }else if (num2 < num3 && num2 < num1) {
        cout << "El menor de los numeros introducidos es el segundo: "<<num2<<"\n";
    }else if (num2 == num3 && num2 < num1){
        cout << "El segundo y tercer numero introducido son iguales: "<<num2<<" y es menor que el primero\n";
    } else if (num3 == num1 && num3 < num2){
        cout << "El primer y tercer numero introducido son iguales: "<<num1<<" y es menor que el segundo\n";
    }else {
        cout << "El menor de los numeros introducidos es el tercero: "<<num3<<"\n";
    }
    system("pause");
    return 0;
}
