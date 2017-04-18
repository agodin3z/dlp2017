/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int i = 10, suma = 0, producto = 1;

    cout << "Programa para sumar y multiplicar los numeros pares del 10 al 30\n\n";

    while (i >=10 && i <=30){
        if(i % 2 == 0){
            suma += i;
            producto *= i;
        }
        i++;
    }
    cout << "\nLa suma de los numeros pares del 10 al 30 es: "<<suma;
    cout << "\nEl producto de los numeros pares del 10 al 30 es: "<<producto<<"\n";
    system("pause");
    return 0;
}
