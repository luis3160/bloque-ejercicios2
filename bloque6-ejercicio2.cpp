#include<iostream>
#include<stdlib.h>

int main() {
	using namespace std;
	int numero[100][100], filas, columnas;


	cout << "introduce el numero de filas: ";cin >> filas;
	cout << "introduce el numero de columnas: ";cin >> columnas;

	for (int i = 0;i < filas;i++) {
		for (int j = 0;j < columnas;j++) {


			cout << "ingresa un numero[" << i << "][" << j << "]";cin >> numero[i][j];
		}
	}

	for (int i = 0;i < filas;i++) {
		for (int j = 0;j < columnas;j++) {

			cout << numero[i][j];
		}
		cout << "\n";
	}


	system("pause");
	return 0;
}