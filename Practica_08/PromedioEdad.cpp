/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int edad, sumEdad=0, promEdad=0;
    cout << "Programa para calcular el promedio de edad de 20 estudiantes\n";

    for(int i=0;i<20;i++){
        cout << "Ingrese la edad del estudiante "<<i+1<<": ";
        cin >> edad;
        if (edad > 0 && edad < 110 ) {
            sumEdad += edad;
        } else {
            cout << "No existen edades negativas, ni personas demasiadas longevas.\n";
            system("pause");
            return 0;
        }
        
    }

    promEdad = sumEdad / 20;

    cout << "\nEl promedio de edad de los 20 estudiantes es de: "<<promEdad<<" años\n";

    system("pause");
    return 0;
}
