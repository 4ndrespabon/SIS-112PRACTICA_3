//Matriz Magica
#include <iostream>
using namespace std;

int main (){
int n, fila = 0, columna = 0, num = 1;
    cout << "Ingrese n: ";
    cin >> n;
    int matriz[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = 0;
        }
    }
    while (num <= n * n) {
        matriz[fila][columna] = num;
        num++;
        int nuevaFila = (fila - 1 + n) % n;
        int nuevaColumna = (columna + 1) % n;
        if (matriz[nuevaFila][nuevaColumna] != 0) {
            fila = (fila + 1) % n;
        } else {
            fila = nuevaFila;
            columna = nuevaColumna;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
