// anadir una cadena a otra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char part1[]="esto es una cadena ";
	char part2[]="de texto mi brother";
	char par3[30];


	strcpy_s(par3, part1);
	strcat_s(par3, part2);

	cout << par3;


	cin.get();
	return 0;
}