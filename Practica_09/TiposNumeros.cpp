/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int respuesta=1, cantidad, numero, nulo=0, positivo=0, negativo=0;

    cout << "Programa para saber si X numeros son positivos, negativos o nulos\n\n";

    while(respuesta == 1) {
        cout << "\nIngrese el numero: ";
        cin >> numero;
        if(numero < 0) {
            negativo++;
        } else if(numero == 0){
            nulo++;
        } else {
            positivo++;
        }

        cout << "\nDesea ingresar mas numeros?\n1. Si\n2. No\n";
        cin >> respuesta;
        while(respuesta != 1 && respuesta !=2){
            cout << "\nError. Respuesta incorrecta\n"<<
            "Desea ingresar mas numeros?\n1. Si\n2. No"<<endl;
            cin >> respuesta;
        }
    }

    cout << "\nDe los numeros ingresados:\n"<<
            negativo<<" son negativos\n"<<
            nulo<<" son nulos\n"<<
            positivo<<" son positivos\n"<<endl;
    system("pause");
    return 0;
}
