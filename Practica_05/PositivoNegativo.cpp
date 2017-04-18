/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num;
    cout << "Programa para saber si un numero es positivo o negativo\n\n";
    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (num < 0) {
        cout << "\nEl numero "<<num<<" es negativo\n";
    } else {
        cout << "\nEl numero "<<num<<" es positivo\n";
    }
    system("pause");
    return 0;
}
