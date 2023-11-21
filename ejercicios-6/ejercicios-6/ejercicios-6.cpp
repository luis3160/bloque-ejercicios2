// ejercicios-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>

using namespace std;
void pedirdato(int numero[], int& cant);
void sacarpromedio(int numero[], int cant);


int main() {
	
	int numero[100];
	int cant;

	pedirdato(numero, cant);
	sacarpromedio(numero, cant);

	system("pause");
	return 0;
}

void pedirdato(int numero[], int& cant) {

	cout << "ingrese el tamano del arreglo: "; 
	cin >> cant;

	for (int i = 0; i < cant; i++) {

		cout << "ingrese un numero:";
		cin >> numero[i];
		
	}
}

void sacarpromedio(int numero[],int cant){
	int total = 0;
	int promedio = 0;
	for (int i = 0; i < cant; i++) {
		total = total + numero[i];
	}

	promedio = total / cant;
	cout << "el promedio es: " << promedio;
}