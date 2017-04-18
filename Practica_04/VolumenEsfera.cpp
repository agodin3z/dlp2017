/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
    float radio, volumen=0;

    cout << ".: Programa para encontrar el volumen de una esfera :.\n\n";
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    volumen = (4/3)*(3.1416)*pow(radio,3);
    cout << "\nEl volumen de una esfera con radio "<<radio<<" es: "<<volumen<<"\n";
    system("pause");
    return 0;
}
