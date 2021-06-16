#include <iostream>
using namespace std;
//Pedirle al usuario las notas correspondientes a la clase y 
int main()
{
	float IfElse, Ciclos, Arreglos, Funciones, Punteros;

	cout << "Ingresa la nota del control If/ELse" << endl;
	cin >> IfElse;
	cout << "Ingresa la nota del control Ciclos" << endl;
	cin >> Ciclos;
	cout << "Ingresa la nota del control Arreglos" << endl;
	cin >> Arreglos;
	cout << "Ingresa la nota del control Funciones" << endl;
	cin >> Funciones;
	cout << "Ingresa la nota del control Punteros" << endl;
	cin >> Punteros;

	cout << "Su nota de presentacion es:" << (IfElse+Ciclos+Arreglos+Funciones+Punteros)/5;
	return 0;
}