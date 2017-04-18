/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int suma=0;
    cout << "Programa para calcular la suma de los pares del 1 al 100.\n";

    for (int i=1;i<=100;i++){
        if (i % 2 == 0){
            suma += i;
        }
    }

    cout << "La suma de los numeros pares del 1 al 100 es: "<<suma<<"\n";
    system("pause");
    return 0;
}
