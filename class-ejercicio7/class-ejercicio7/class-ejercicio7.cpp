#include <iostream>
#include <cstring> // Necesario para usar strlen

using namespace std;

// Prototipo de la función
bool esPalindromo(const char palabra[]);

int main() {
    const int longitudMaxima = 100;
    char palabra[longitudMaxima];

    // Pedir al usuario que ingrese una palabra
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    // Verificar si la palabra es un palíndromo
    if (esPalindromo(palabra)) {
        cout << "La palabra es un palíndromo.\n";
    }
    else {
        cout << "La palabra no es un palíndromo.\n";
    }

    return 0;
}

// para verificar si es un palíndromo
bool esPalindromo(const char palabra[]) {
    int longitud = strlen(palabra);

    // Iterar sobre la mitad de la palabra
    for (int i = 0; i < longitud / 2; i++) {
        // Comparar los caracteres simétricos de la palabra
        if (palabra[i] != palabra[longitud - 1 - i]) {
            return false; // Si no son iguales, no es un palíndromo
        }
    }

    return true; // Si llega aquí, es un palíndromo
}
