/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    double masa, presion, volumen, temperatura;

    cout << "Programa para calcular la masa total de una masa de aire\n";
    cout << "Ingrese el valor de la presion: ";
    cin >> presion;
    if (presion >= 0 && presion <= 100){
        cout << "Ingrese el valor de el volumen: ";
        cin >> volumen;
        if (volumen >= 0 && volumen <= 100){
            cout << "Ingrese el valor de la temperatura: ";
            cin >> temperatura;
            if (temperatura >= 0 && temperatura <= 100){
                masa = (presion * volumen) / (0.37 * (temperatura + 460));
                cout << "Una masa de aire con:\n"<<
                     presion<<"u de presion\n"<<
                     volumen<<"u de volumen\n"<<
                     temperatura<<"u de temperatura\n"<<
                     "Tiene una masa total de: "<<masa<<"u de masa.\n"<<endl;
            }else{
                cout << "Error: No se permiten valores menores a 0 ni mayores a 100.\n";
                system("pause");
                return 0;
            }
        }else{
            cout << "Error: No se permiten valores menores a 0 ni mayores a 100.\n";
            system("pause");
            return 0;
        }

    }else{
        cout << "Error: No se permiten valores menores a 0 ni mayores a 100.\n";
        system("pause");
        return 0;
    }
    system("pause");
    return 0;
}
