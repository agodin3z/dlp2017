#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int malas=0, regulares=0, buenas=0, excelentes=0;
	/* Se usara:
		"malas" para notas entre 0 y 3.99
		"regulares" para notas entre 4 y 5.99
		"buenas" para notas entre 6 y 7.99
		"excelentes" para notas entre 8 y 10
	*/
	float nota;

	cout << "Programa para clasificar notas segun su rango.\n\n";
	do {
		cout << "Ingrese la calificacion del estudiante (-1 para salir): ";
		cin >> nota;
		if (nota >= 0 && nota <=10){ //Para evaluar solo numeros del 1 al 10
			if (nota < 4){
				malas++;
			} else if (nota >= 4 && nota < 6){
				regulares++;
			} else if (nota >= 6 && nota < 8){
				buenas++;
			} else {
				excelentes++;
			}
		}
	} while (nota != -1);

	cout << "\nDe las calificaciones ingresadas:\n"<<
			malas<<" fueron calificaciones entre 0 a 3.99\n"<<
			regulares<<" fueron calificaciones entre 4 a 5.99\n"<<
			buenas<<" fueron calificaciones entre 6 a 7.99\n"<<
			excelentes<<" fueron calificaciones entre 8 a 10"<<endl;

	system("pause");
	return 0;
}