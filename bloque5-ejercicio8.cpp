#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {

	int numero[] = { 1,2,3,4,5 };
	int numero2[5]=0;
	int multiplicacion = 2;

	for (int i = 0;i < 5;i++) {
		multiplicacion *= numero[i];

		numero2[i] = numero[i]*multiplicacion;
	}
	
	for (int i = 0;i < 5;i++) {

		
		cout << numero2[i] << endl;


	}



	system("pause");
	return 0;

}