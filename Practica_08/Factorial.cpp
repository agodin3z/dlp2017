/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num, factorial=1;
    cout << "Programa para calcular el factorial de un número\n";
    cout << "Ingrese un numero : ";
    cin >> num;

    for(int i=1;i<=num;i++){
        factorial *= i;
    }

    cout << "\nEl factorial de "<<num<<" es: "<<factorial<<"\n";
    system("pause");
    return 0;
}
