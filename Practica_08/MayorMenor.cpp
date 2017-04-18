/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero, mayor=0, menor=0;

    cout << "Programa para saber cual de los 10 numeros introducidos es el mayor y menor\n";
    cout << "Introduzca un numero: ";
    cin >> numero;
    mayor=numero;
    menor=numero;

    for(int i=0;i<9;i++){
        cout << "Introduzca otro numero: ";
        cin >> numero;

        if(numero > mayor){
            mayor = numero;
        } else if(numero < menor){
            menor = numero;
        }
    }

    cout << "\nDe los 10 numeros introducidos:\n"<<
            "El numero mayor es "<<mayor<<
            "\nEl numero menor es "<<menor<<"\n"<<endl;
    system("pause");
    return 0;
}
