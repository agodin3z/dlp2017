#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int cantidad, tipoPago, tipoProducto, respuesta=1, clientes=0;
	float precioUnitario, total=0, totalFinal=0;

	cout << "Programa para calcular el costo total de un pedido de una libreria.\n\n";
	do {
		cout << "Que producto compra?\n"<<
				"1. Libros\n"<<
				"2. Cuadernos\n"<<
				"3. Revistas"<<endl;
		cin >> tipoProducto;

		//Verifica si el usuario ingresa el tipo del producto correcto
		if (tipoProducto >= 1 && tipoProducto <= 3){
			cout << "Cantidad de productos: ";
			cin >> cantidad;

			cout << "Precio Unitario: $";
			cin >> precioUnitario;

			cout << "Tipo de pago?\n"<<
					"1. Al Contado\n"<<
					"2. Al Credito"<<endl;
			cin >> tipoPago;

			//Verifica si el usuario selecciona correctamente el tipo de pago
			if (tipoPago !=1 && tipoPago != 2) {
				cout << "\nError al seleccionar el tipo de pago\n";
			} else {
				if (tipoProducto == 1) { //IF tipoProducto
					total = precioUnitario * cantidad;
					total -= (total * 0.22);
					cout << "\nObtiene un 22% de descuento en su compra.\n";
				} else if (tipoProducto == 2) {
					total = precioUnitario * cantidad;
					total -= (total * 0.10);
					cout << "\nObtiene un 10% de descuento en su compra.\n";
				} else {
					total = precioUnitario * cantidad;
					total -= (total * 0.16);
					cout << "\nObtiene un 16% de descuento en su compra.\n";
				} //Fin IF tipoProducto

				if (tipoPago == 1) { //IF tipoPago
					total -= (total * 0.06);
					cout << "Obtiene un 6% de descuento extra por comprar al Contado.\n";
				} //Fin IF tipoPago

				totalFinal += total;
				clientes++;

				cout << "Costo total del pedido: $"<<total<<"\n";
			} //Fin validacion tipoPago
		} else {
			cout << "\nError al seleccionar el producto\n";
		} //Fin validacion tipoProducto

		cout << "\nRealizara otra venta?\n1. Si\n2. No\n";
		cin >> respuesta;
	} while (respuesta == 1);

	cout << "\nTotal de ventas del día: $"<<totalFinal<<
			"\nClientes atendidos: "<<clientes<<endl;
	system("pause");
	return 0;
}