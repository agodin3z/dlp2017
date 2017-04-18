/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int suma=0, i=0, num1=0, num2=0;

    cout << "Programa para sumar los numeros de una serie.\n";
    while( i>=0 && i<=1795){
        num1 = i + 2;
        num2 = num1 + 3;
        suma = num1 + num2;
        i = num2;
        cout <<num1<<" ";
        cout <<i<<" ";
    }

    cout << "\nLa suma de la serie es: "<<suma<<"\n";
    system("pause");
    return 0;
}
