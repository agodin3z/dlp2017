/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    double inch, cm=0, m=0, km=0;

    cout << ".: Programa para convertir pulgadas a centimetros, metros y kilometros :.\n\n";
    cout << "Ingrese la medida en pulgadas: ";
    cin >> inch;

    cm = inch * 2.54; //1 inch = 2.54 cm
    m = cm / 100; //1 m = 100 cm
    km = m / 1000; //1km = 1000 m

    cout <<inch<<" pulgadas son: "<<cm<<" centimetros, "<<m<<" metros o "<<km<<" kilometros\n";
    system("pause");
    return 0;
}
