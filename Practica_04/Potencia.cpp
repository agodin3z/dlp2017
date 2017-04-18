/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
    int exponente;
    float numero, potencia=0;

    cout << ".: Programa para elevar un numero X a una potencia Y :. n\n\n";
    cout << "Ingrese el numero: ";
    cin >> numero;
    cout << "Ingrese el exponente al que elevara el numero "<<numero<<": ";
    cin >> exponente;
    potencia = pow(numero,exponente);

    cout << "\nEl numero "<<numero<<" elevado a la potencia "<<exponente<<" es: "<<potencia<<"\n";
    system("pause");
    return 0;
}
