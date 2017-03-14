#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	double x, y;

	cout << "Programa para conocer la ubicacion de un punto en el plano cartesiano\n";
	cout << "Ingrese el valor de X: ";
	cin >> x;
	cout << "Ingrese el valor de Y: ";
	cin >> y;

	if (x > 0 && y > 0){
		cout << "\nEl punto ("<<x<<","<<y<<") se encuentra en el primer cuadrante\n";
	} else if (x < 0 && y > 0){
		cout << "\nEl punto ("<<x<<","<<y<<") se encuentra en el segundo cuadrante\n";
	} else if (x < 0 && y < 0){
		cout << "\nEl punto ("<<x<<","<<y<<") se encuentra en el tercer cuadrante\n";
	} else if (x > 0 && y < 0){
		cout << "\nEl punto ("<<x<<","<<y<<") se encuentra en el cuarto cuadrante\n";
	} else {
		cout << "\nEl punto ("<<x<<","<<y<<") se encuentra en el centro del plano cartesiano\n";
	}

	system("pause");
	return 0;
}
