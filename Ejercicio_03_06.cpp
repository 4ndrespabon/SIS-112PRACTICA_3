// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 6
// Problema planteado: Generar una matriz NxN, que se llene con la serie de Fibonacci. 
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese el valor de N para la matriz NxN de Fibonacci: ";
    cin >> N;

    int a = 0, b = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << a << "\t";
            int suma = a + b;
            a = b;
            b = suma;
        }
        cout << endl;
    }

    return 0;
}
