/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    float nota;
    cout << "Programa para saber si un estudiante a aprobado un examen\n";
    cout << "Ingrese la nota del examen: ";
    cin >> nota;

    if (nota > 10) {
        cout << "\nUsted a aprobado.";
    }
    cout << "\nSu nota es "<<nota<<"\n";
    system("pause");
    return 0;
}
