// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 08/09/2023
// Fecha modificaci�n: 08/09/2023
// N�mero de ejericio: 9
// Problema planteado: Transponer matriz
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Ingrese el n�mero de filas N: ";
    cin >> N;
    cout << "Ingrese el n�mero de columnas M: ";
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
