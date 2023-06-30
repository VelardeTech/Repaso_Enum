#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
using namespace System;

int main() {
	union Numero_letra {
		int numero;
		char letra;
	};
	Numero_letra X = {'A'};
	cout << "X como numero: " << X.numero << endl;
	cout << "X como letra: " << (int)X.letra << endl << endl;

	enum dias_semama { lunes, martes, miercoles, jueves };
	dias_semama dia = martes;
	cout << dia << endl;

	_getch(); return 0;
}