/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numeros, positivos=0, negativos=0, nulos=0;

    cout << "Programa para identificar el tipo de numero introducido\n";

    for(int i=0;i<10;i++){
        cout << "\nIntroduzca el numero: ";
        cin >> numeros;

        if(numeros == 0){
            nulos++;
        } else if (numeros < 0){
            negativos++;
        } else {
            positivos++;
        }
    }

    cout << "\nDe los 10 numeros introducidos:\n"<<
            negativos<<" numeros eran negativos\n"<<
            nulos<<" numeros eran nulos\n"<<
            positivos<<" numeros eran positivos\n"<<endl;
    system("pause");
    return 0;
}
