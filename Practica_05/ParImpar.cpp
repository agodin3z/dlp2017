/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num;
    cout << "Programa para saber si un numero es par o impar\n\n";
    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "\nEl numero "<<num<<" es par\n";
    } else {
        cout << "\nEl numero "<<num<<" es impar\n";
    }
    system("pause");
    return 0;
}
