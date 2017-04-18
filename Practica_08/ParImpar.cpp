/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numeros, pares=0, impares=0;

    cout << "Programa para saber cuantos de los numeros introducidos son pares e impares\n";

    for(int i=0;i<5;i++){
        cout << "\nIntroduzca el numero: ";
        cin >> numeros;

        if(numeros % 2 == 0){
            pares++;
        } else {
            impares++;
        }
    }

    cout << "\nDe los 5 numeros introducidos:\n"<<
            pares<<" numeros eran pares\n"<<
            impares<<" numeros eran impares\n"<<endl;
    system("pause");
    return 0;
}
