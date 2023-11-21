#include <iostream>
#include <climits> // Necesario para usar INT_MAX , INT_MIN

using namespace std;

// Prototipo de la funci�n
void encontrarMinMax(int numeros[], int tamano, int& menor, int& mayor);

int main() {
    const int tamanoMaximo = 100;
    int numeros[tamanoMaximo];
    int tamano;

    // Pedir al usuario el tama�o del arreglo
    cout << "Ingrese el tama�o del arreglo: ";
    cin >> tamano;

    // Verificar que el tama�o no exceda el m�ximo
    if (tamano <= tamanoMaximo && tamano > 0) {
        // Pedir al usuario los n�meros
        cout << "Ingrese los n�meros del arreglo:\n";
        for (int i = 0; i < tamano; i++) {
            cout << "N�mero " << i + 1 << ": ";
            cin >> numeros[i];
        }

        // Variables para almacenar el menor y el mayor
        int menor, mayor;

        // funci�n para encontrar el menor y el mayor
        encontrarMinMax(numeros, tamano, menor, mayor);

        // Mostrar el resultado
        cout << "El menor n�mero es: " << menor << endl;
        cout << "El mayor n�mero es: " << mayor << endl;
    }
    else {
        cout << "Tama�o del arreglo no v�lido. Debe ser un n�mero positivo menor o igual a " << tamanoMaximo << ".\n";
    }

    return 0;
}

//  encontrar el menor y el mayor
void encontrarMinMax(int numeros[], int tamano, int& menor, int& mayor) {
    menor = INT_MAX; // Inicializar con el valor m�ximo de int
    mayor = INT_MIN; // Inicializar con el valor m�nimo de int

    // Iterar sobre el arreglo para encontrar el menor y el mayor
    for (int i = 0; i < tamano; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
}
