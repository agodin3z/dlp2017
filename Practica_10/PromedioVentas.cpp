#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int respuesta=1, empleado=0, venta=0;
	float valorVenta, totalVentas=0, promVentas=0;

	cout << "Programa para calcular el promedio de ventas de X empleados.\n";
	do {
		empleado++;
		do { 
			venta++;
			cout << "\nVenta "<<venta<<" del empleado "<<empleado<<": $";
			cin >> valorVenta;

			totalVentas += valorVenta;
			
			cout << "\nRegistrara mas ventas para el empleado "<<empleado<<"?\n1. Si\n2. No\n";
			cin >> respuesta;
		} while (respuesta == 1);

		venta = 0; //Reiniciar contador

		cout << "\nRegistrara las ventas de otro empleado?\n1. Si\n2. No\n";
		cin >> respuesta;
	} while (respuesta == 1);

	promVentas = totalVentas / empleado;

	cout << "\nPromedio de ventas de "<<empleado<<" empleados: $"<<promVentas<<"\n";
	system("pause");
	return 0;
}