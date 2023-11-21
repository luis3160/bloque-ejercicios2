#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero;

    cout << "Ingrese un n�mero entero positivo: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << numero << " es un n�mero primo." << endl;
    }
    else {
        cout << numero << " no es un n�mero primo." << endl;
    }

    return 0;
}
