// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 5
// Problema planteado: Generar la matriz para un orden NxN   
// Sea n=5     
// 1    2    3    4    5     
// 3    4    5    6    7    
// 5    6    7    8    9    
// 7    8    9    10   11    
// 9    10   11   12   13 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz n: ";
    cin >> n;

    int matriz[n][n];
    int valor = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = valor + j;
        }
        valor += 2;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
