/* Author: agodin3z */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numLibro;
    cout << ".: Programa para seleccionar un libro para leer :.\n\n";
    cout << "Ingrese el numero del libro que le gustaria leer:\n"<<
            "1- Administracion Linux\n"<<
            "2- La Biblia de C#\n"<<
            "3- La Biblia de PHP\n"<<
            "4- Debian Handbook\n"<<
            "5- Aprenda Gimp a los tropezones\n"<<
            "6- JavaScript Patterns\n"<<
            "7- Aprendiendo UML\n"<<endl;
    cin >> numLibro;

    if (numLibro == 1){
        cout << "Ha escogido leer el libro: Administracion Linux\n";
    } else if (numLibro == 2){
        cout << "Ha escogido leer el libro: La Biblia de C#\n";
    } else if (numLibro == 3){
        cout << "Ha escogido leer el libro: La Biblia de PHP\n";
    } else if (numLibro == 4){
        cout << "Ha escogido leer el libro: Debian Handbook\n";
    } else if (numLibro == 5){
        cout << "Ha escogido leer el libro: Aprenda Gimp a los tropezones\n";
    } else if (numLibro == 6){
        cout << "Ha escogido leer el libro: JavaScript Patterns\n";
    } else if (numLibro == 7){
        cout << "Ha escogido leer el libro: Aprendiendo UML\n";
    } else {
        cout << "El valor ingresado no corresponde a ningun libro.\n";
    }
    system("pause");
    return 0;
}
