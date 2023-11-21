#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int FILAS = 5;
const int COLUMNAS = 6;

// Función para imprimir la matriz
void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // a) Almacenar números aleatorios en una matriz de 5x6
    int matriz[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz[i][j] = rand() % 11; // Números aleatorios entre 0 y 10
        }
    }

    // b) Imprimir la matriz
    cout << "Matriz generada:" << endl;
    imprimirMatriz(matriz);

    // c) Imprimir la suma de los números almacenados en la matriz
    int sumaTotal = 0;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            sumaTotal += matriz[i][j];
        }
    }
    cout << "Suma total de los elementos de la matriz: " << sumaTotal << endl;

    // d) Imprimir la suma de los números pares almacenados en la matriz
    int sumaPares = 0;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (matriz[i][j] % 2 == 0) {
                sumaPares += matriz[i][j];
            }
        }
    }
    cout << "Suma de los números pares en la matriz: " << sumaPares << endl;

    // e) Imprimir la suma de los números impares almacenados en la matriz
    int sumaImpares = 0;
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            if (matriz[i][j] % 2 != 0) {
                sumaImpares += matriz[i][j];
            }
        }
    }
    cout << "Suma de los números impares en la matriz: " << sumaImpares << endl;

    // f) Imprimir la suma de cada columna
    cout << "Suma de cada columna:" << endl;
    for (int j = 0; j < COLUMNAS; ++j) {
        int sumaColumna = 0;
        for (int i = 0; i < FILAS; ++i) {
            sumaColumna += matriz[i][j];
        }
        cout << "Columna " << j + 1 << ": " << sumaColumna << endl;
    }

    // g) Imprimir la suma de cada fila
    cout << "Suma de cada fila:" << endl;
    for (int i = 0; i < FILAS; ++i) {
        int sumaFila = 0;
        for (int j = 0; j < COLUMNAS; ++j) {
            sumaFila += matriz[i][j];
        }
        cout << "Fila " << i + 1 << ": " << sumaFila << endl;
    }

    // h) Imprimir la suma de los elementos de la diagonal principal
    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < min(FILAS, COLUMNAS); ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
    }
    cout << "Suma de los elementos de la diagonal principal: " << sumaDiagonalPrincipal << endl;

    return 0;
}
