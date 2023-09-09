// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 07/09/2023
// Fecha modificación: 07/09/2023
// Número de ejericio: 2
// Problema planteado: Matriz Espiral
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz n: ";
    cin >> n;

    int matriz[n][n];
    int valor = 1;
    int inicioFila = 0, finFila = n - 1, inicioColumna = 0, finColumna = n - 1;

    while (valor <= n * n) {
        for (int i = inicioColumna; i <= finColumna; i++) {
            matriz[inicioFila][i] = valor++;
        }
        inicioFila++;

        for (int i = inicioFila; i <= finFila; i++) {
            matriz[i][finColumna] = valor++;
        }
        finColumna--;

        for (int i = finColumna; i >= inicioColumna; i--) {
            matriz[finFila][i] = valor++;
        }
        finFila--;

        for (int i = finFila; i >= inicioFila; i--) {
            matriz[i][inicioColumna] = valor++;
        }
        inicioColumna++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
