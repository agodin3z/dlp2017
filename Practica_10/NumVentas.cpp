#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int menores=0, intermedias=0, mayores=0;
	/* Se usara:
		"menores" para contar ventas <= $200
		"intermedias" para contar ventas > $200 pero < $400
		"mayores" para contar ventas >= $400
	*/
	float valorVenta;

	cout << "Programa para saber el tipo de X ventas realizadas\n\n";
	do {
		cout << "Ingrese el valor de la venta (-1 para salir): $";
		cin >> valorVenta;
		if (valorVenta > 0){ //Evita que tome -1 como valor para ventas <= 200
			if (valorVenta<= 200){
				menores++;
			} else if (valorVenta > 200 && valorVenta < 400){
				intermedias++;
			} else {
				mayores++;
			}
		}
	} while (valorVenta != -1);

	cout << "\nDe las ventas ingresadas:\n"<<
			menores<<" fueron ventas inferiores o iguales a $200\n"<<
			intermedias<<" fueron ventas mayores a $200 pero inferiores a $400\n"<<
			mayores<<" fueron ventas mayores o iguales a $400"<<endl;


	system("pause");
	return 0;
}