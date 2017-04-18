/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero, resultado;

    cout << "Programa para imprimir una tabla de multiplicar\n";
    cout << "Introduzca un numero (1-10): ";
    cin >> numero;

    if (numero < 1 && numero > 10){
        cout << "Error. Introduzca un numero comprendido entre el 1 y el 10\n";
    } else {
        cout << "\nTabla de multiplicar del numero "<<numero<<"\n";
        for(int i=1;i<=10;i++){
            resultado = numero * i;
            cout << numero<<" x "<<i<<" = "<<resultado<<endl;
        }
        cout << "\n";
    }
    system("pause");
    return 0;
}
