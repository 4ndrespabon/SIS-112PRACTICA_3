// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 07/09/2023
// Fecha modificación: 07/09/2023
// Número de ejericio: 1
// Problema planteado: Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por la fina n. 
#include <iostream>

using namespace std;

int main()
{
    int n,num;
    cout<<"Ingrese n: "<<endl;
    cin>>n;
    int matriz[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"Ingrese numero: "<<endl;
            cin>>matriz[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"-------------"<<endl;
    for (int i=0 ; i<n ; i++){
        cout<<matriz[n-1][i]<<" ";
    }
    cout<<"\n";
    for (int i=1 ; i<(n-1) ; i++){
        for (int j=0; j<n; j++){
            cout<<matriz[i][j]<<" ";
        }
    }
    cout<<"\n";
    for (int i=0 ; i<n ; i++){
        cout<<matriz[0][i]<<" ";
    }
    return 0;
}
