// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 08/09/2023
// Fecha modificación: 08/09/2023
// Número de ejericio: 9
// Problema planteado: Transponer matriz
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Ingrese el número de filas N: ";
    cin >> N;
    cout << "Ingrese el número de columnas M: ";
    cin >> M;

    int matriz[N][M];
    int matrizTranspuesta[M][N];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrizTranspuesta[i][j] = matriz[j][i];
        }
    }

    cout << "Matriz original:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
