// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 7
// Problema planteado: Efectuar la suma de una matriz tridimensional de orden n x n x n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int matriz[n][n][n];

    int suma = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                suma += matriz[i][j][k];

    cout << "La suma es: " << suma << endl;

    return 0;
}

