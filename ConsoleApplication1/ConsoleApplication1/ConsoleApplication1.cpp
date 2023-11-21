// funciones

#include<iostream>
#include<cstdlib>

using namespace std;

int sumar(int num1, int num2);

int main() {
	int n = 0, m = 0, suma = 0;

	cout << "ingresa un numero: "; cin >> n;
	cout << "ingresa otro numero: "; cin >> m;

	suma = sumar(n,m);

	cout << suma;
	return 0;

}

int sumar(int num1,int num2){
	int suma = 0;
	suma = num1 + num2;
	return suma;
}