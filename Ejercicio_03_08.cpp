// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 08
// Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N 

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Ingrese el número de filas (N): ";
    cin >> N;
    cout << "Ingrese el número de columnas (M): ";
    cin >> M;

    int matriz1[N][M];
    int matriz2[M][N];
    int resultado[N][N];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < M; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "El resultado de la multiplicación es:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
