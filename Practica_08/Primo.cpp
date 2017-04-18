/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int contador=0, num;
    cout << "Programa para saber si un numero es primo\n";
    cout << "Ingrese un numero: ";
    cin >> num;

    for(int i=1;i<=num;i++){
        if (num % i == 0){
            contador++;
        }
    }

    if (contador == 2){
        cout << "\nEl numero "<<num<<" es primo.\n";
    } else if (num == 0) {
        cout << "El numero introducido es cero\n";
    } else if (num == 1) {
        cout << "El numero introducido es la unidad\n";
    } else {
        cout << "\nEl numero "<<num<<" no es primo.\n";
    }
    system("pause");
    return 0;
}
