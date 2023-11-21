#include <iostream>
#include <climits> // Necesario para usar INT_MAX , INT_MIN

using namespace std;

// Prototipo de la función
void encontrarMinMax(int numeros[], int tamano, int& menor, int& mayor);

int main() {
    const int tamanoMaximo = 100;
    int numeros[tamanoMaximo];
    int tamano;

    // Pedir al usuario el tamaño del arreglo
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tamano;

    // Verificar que el tamaño no exceda el máximo
    if (tamano <= tamanoMaximo && tamano > 0) {
        // Pedir al usuario los números
        cout << "Ingrese los números del arreglo:\n";
        for (int i = 0; i < tamano; i++) {
            cout << "Número " << i + 1 << ": ";
            cin >> numeros[i];
        }

        // Variables para almacenar el menor y el mayor
        int menor, mayor;

        // función para encontrar el menor y el mayor
        encontrarMinMax(numeros, tamano, menor, mayor);

        // Mostrar el resultado
        cout << "El menor número es: " << menor << endl;
        cout << "El mayor número es: " << mayor << endl;
    }
    else {
        cout << "Tamaño del arreglo no válido. Debe ser un número positivo menor o igual a " << tamanoMaximo << ".\n";
    }

    return 0;
}

//  encontrar el menor y el mayor
void encontrarMinMax(int numeros[], int tamano, int& menor, int& mayor) {
    menor = INT_MAX; // Inicializar con el valor máximo de int
    mayor = INT_MIN; // Inicializar con el valor mínimo de int

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
