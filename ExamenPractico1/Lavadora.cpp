#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	double peso1, peso2, peso3;

	cout << "Programa para conocer el nivel de agua para lavar 3 cargas de ropa en una lavadora\n";
	//Inicia Carga 1
	cout << "Ingrese el peso de la ropa (lbs): ";
	cin >> peso1;

	if (peso1 == 0){
		cout << "\nEl peso es de cero. No hay nada que lavar\n";
	} else if (peso1 > 0 && peso1 <= 30){
		if (peso1 > 0 && peso1 < 8){
			cout << "\nPara lavar "<<peso1<<" lbs de ropa se necesita el nivel minimo de agua\n";
		} else if (peso1 >= 8 && peso1 < 15){
			cout << "\nPara lavar "<<peso1<<" lbs de ropa se necesita el nivel medio de agua\n";
		} else if (peso1 >= 15 && peso1 < 22){
			cout << "\nPara lavar "<<peso1<<" lbs de ropa se necesita el nivel alto de agua\n";
		}else {
			cout << "\nPara lavar "<<peso1<<" lbs de ropa se necesita el nivel maximo de agua\n";
		}

		//Inicia Carga 2
		cout << "Ingrese el peso de la ropa (lbs): ";
		cin >> peso2;

		if (peso2 == 0){
			cout << "\nEl peso es de cero. No hay nada que lavar\n";
		} else if (peso2 > 0 && peso2 <= 30){
			if (peso2 > 0 && peso2 < 8){
				cout << "\nPara lavar "<<peso2<<" lbs de ropa se necesita el nivel minimo de agua\n";
			} else if (peso2 >= 8 && peso2 < 15){
				cout << "\nPara lavar "<<peso2<<" lbs de ropa se necesita el nivel medio de agua\n";
			} else if (peso2 >= 15 && peso2 < 22){
				cout << "\nPara lavar "<<peso2<<" lbs de ropa se necesita el nivel alto de agua\n";
			}else {
				cout << "\nPara lavar "<<peso2<<" lbs de ropa se necesita el nivel maximo de agua\n";
			}

			//Inicia Carga 3
			cout << "Ingrese el peso de la ropa (lbs): ";
			cin >> peso3;

			if (peso3 == 0){
				cout << "\nEl peso es de cero. No hay nada que lavar\n";
			} else if (peso3 > 0 && peso3 <= 30){
				if (peso3 > 0 && peso3 < 8){
					cout << "\nPara lavar "<<peso3<<" lbs de ropa se necesita el nivel minimo de agua\n";
				} else if (peso3 >= 8 && peso3 < 15){
					cout << "\nPara lavar "<<peso3<<" lbs de ropa se necesita el nivel medio de agua\n";
				} else if (peso3 >= 15 && peso3 < 22){
					cout << "\nPara lavar "<<peso3<<" lbs de ropa se necesita el nivel alto de agua\n";
				}else {
					cout << "\nPara lavar "<<peso3<<" lbs de ropa se necesita el nivel maximo de agua\n";
				}
			} else {
				cout << "\nLa lavadora no puede funcionar con un peso de mas de 30 lbs\nRetire ropa y comience de nuevo.\n";
			} //Termina Carga 3


		} else {
			cout << "\nLa lavadora no puede funcionar con un peso de mas de 30 lbs\nRetire ropa y comience de nuevo.\n";
		} //Termina Carga 2


	} else {
		cout << "\nLa lavadora no puede funcionar con un peso de mas de 30 lbs\nRetire ropa y comience de nuevo.\n";
	} //Termina Carga 1

	system("pause");
	return 0;
}
