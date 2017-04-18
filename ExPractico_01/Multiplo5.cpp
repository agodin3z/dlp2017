/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero;

	cout << "Programa para saber si un numero es multiplo de 5\n";
	cout << "Ingrese el valor del numero: ";
	cin >> numero;

	if (numero % 5 == 0){
		cout << "\nEl numero "<<numero<<" es multiplo de 5.\n";
	} else {
		cout << "\nEl numero "<<numero<<" no es multiplo de 5.\n";
	}

	system("pause");
	return 0;
}
