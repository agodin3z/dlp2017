/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int notas, sumNotas=0, promNotas=0;
    cout << "Programa para calcular el promedio de notas de 10 estudiantes\n";

    for(int i=0;i<10;i++){
        cout << "Ingrese la nota del estudiante "<<i+1<<": ";
        cin >> notas;

        if(notas < 0 && notas > 10){
            cout << "Error. No existen notas menores a cero ni mayores a 10\n";
            return 0;
        } else {
            sumNotas += notas;
        }
    }

    promNotas = sumNotas / 10;

    cout << "\nEl promedio de notas de los 10 estudiantes es de: "<<promNotas<<"\n";

    system("pause");
    return 0;
}
