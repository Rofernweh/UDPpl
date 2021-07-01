#include <iostream>
using namespace std;
/*Escribir un programa que pida al usuario notas.
Cuando el usuario ingresa un negativo, el programa calcula el promedio de las notas ingresadas (sin considerar el negativo).*/
int main ()
{	float nota=0, promedio=0, aux=0;
	while (nota >= 0)
	{
		cout << "Ingrese su nota: \n";
		cin >> nota;
		if(nota < 0)
		{
			cout << "Su promedio es: " << promedio/aux;
		}
		promedio += nota;
		aux++;
	}

	return 0;
}