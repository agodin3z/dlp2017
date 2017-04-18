/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int fibonacci=0, anterior=0, siguiente=1;
    cout << "Programa para imprimir los primeros 15 numeros de la serie fibonacci\n";

    cout << "\n"<<anterior<<endl;
    cout << siguiente<<endl;
    for(int i=0;i<13;i++){
        fibonacci = anterior + siguiente;
        cout << fibonacci<<endl;
        anterior = siguiente;
        siguiente = fibonacci;
    }

    system("pause");
    return 0;
}
