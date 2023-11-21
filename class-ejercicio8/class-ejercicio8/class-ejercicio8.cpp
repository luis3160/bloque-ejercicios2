#include <iostream>

using namespace std;

// Función para calcular el coeficiente binomial
int calcularCoeficienteBinomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    else {
        return calcularCoeficienteBinomial(n - 1, k - 1) + calcularCoeficienteBinomial(n - 1, k);
    }
}

// Función para calcular el binomio de Newton
void calcularBinomioNewton(int a, int b, int n) {
    for (int k = 0; k <= n; ++k) {
        int coeficiente = calcularCoeficienteBinomial(n, k);
        int termino = coeficiente * pow(a, n - k) * pow(b, k);

        cout << coeficiente << " * " << a << "^" << n - k << " * " << b << "^" << k;

        if (k < n) {
            cout << " + ";
        }
    }
}

int main() {
    int a = 2;
    int b = 3;
    int n = 4;

    cout << "El resultado del binomio de Newton para (" << a << " + " << b << ")^" << n << " es: ";
    calcularBinomioNewton(a, b, n);

    return 0;
}
