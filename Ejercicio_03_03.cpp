// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 07/09/2023
// Fecha modificación: 07/09/2023
// Número de ejericio:3 
// Problema planteado: Generar una matriz de N x N con números al azar entre A y B, y determinar:  
// • La suma de la última columna 
// • El producto total de la última fila 
// • Obtener el mayor valor y su posición 
// • Obtener la desviación estándar de todos los elementos de la matriz 
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(NULL));
    int N, A, B;
    cout << "Ingrese el valor de N: ";
    cin >> N;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;
    vector<vector<int>> matriz(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % (B - A + 1) + A;
        }
    }
    int sumaUltimaColumna = 0;
    for (int i = 0; i < N; i++) {
        sumaUltimaColumna += matriz[i][N - 1];
    }
    int productoUltimaFila = 1;
    for (int j = 0; j < N; j++) {
        productoUltimaFila *= matriz[N - 1][j];
    }
    int mayorValor = matriz[0][0];
    int filaMayor = 0, columnaMayor = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > mayorValor) {
                mayorValor = matriz[i][j];
                filaMayor = i;
                columnaMayor = j;
            }
        }
    }
    double media = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            media += matriz[i][j];
        }
    }
    media /= (N * N);

    double sumaCuadrados = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sumaCuadrados += pow(matriz[i][j] - media, 2);
        }
    }
    double desviacionEstandar = sqrt(sumaCuadrados / (N * N));
    cout << "Suma de la última columna: " << sumaUltimaColumna << endl;
    cout << "Producto total de la última fila: " << productoUltimaFila << endl;
    cout << "El mayor valor es " << mayorValor << " y se encuentra en la fila " << filaMayor + 1 << " y columna " << columnaMayor + 1 << endl;
    cout << "Desviación estándar de todos los elementos de la matriz: " << desviacionEstandar << endl;

    return 0;
}
