/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int respuesta=1, ingresado=0,numero, ulam=2;

    cout << "Programa de la Conjetura de Ulam.\n";

    while(respuesta == 1) {
        cout << "\nIngrese un numero positivo: ";
        cin >> numero;
        while(numero < 0){
            cout << "\nError. Solo se permiten numeros positivos\n"<<
            "Ingrese un numero positivo: "<<endl;
            cin >> numero;
        }
        ingresado = numero;

        while (numero > 1){
            if (numero % 2 == 0){
                ulam = numero / 2;
            } else {
                ulam = (numero * 3) + 1;
            }
            numero = ulam;
            cout << ulam<<"\n";
        }

        cout << "\nConjetura de Ulam\nValor ingresado: "<<ingresado<<" Valor obtenido: "<<ulam<<"\n";

        cout << "\nIntentar de nuevo?\n1. Si\n2. No\n";
        cin >> respuesta;
        while(respuesta != 1 && respuesta !=2){
            cout << "\nError. Respuesta incorrecta\n"<<
            "Intentar de nuevo?\n1. Si\n2. No"<<endl;
            cin >> respuesta;
        }
    }

    system("pause");
    return 0;

}
