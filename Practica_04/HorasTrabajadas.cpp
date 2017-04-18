/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int horas;
    float tarifaHora, salarioDia=0, salarioSem=0;

    cout << ".: Programa para calcular el salario semanal de una persona :.\n\n";
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese la tarifa por hora: $";
    cin >> tarifaHora;
    salarioDia = horas * tarifaHora;
    salarioSem = salarioDia * 5;

    cout << "\nEl salario semanal del trabajador es: $"<<salarioSem<<"\n";
    system("pause");
    return 0;
}
