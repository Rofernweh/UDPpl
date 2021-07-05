#include <iostream>
using namespace std;
/*Escriba un programa que pida al usuario ingresar 100 enteros a un arreglo, y un entero N.
 Luego, el programa debe buscar si N está dentro de los 100 elementos de arreglo, e imprimir en pantalla "N está en el arreglo" o bien "N no está en el arreglo.*/
int main()
{
	int num[100], contador=0;
	for (int i=0; i<100;i++)
	{
		cout << "Ingrese un numero: \n";
		cin >> num[i];
	}
	for (int j=0; j<100; j++)
	{
		if (num[j]>=10)
		{
			contador++;	
		}
	}
	cout << "La cantidad de numeros mayores o iguales a 10 es: " << contador;

	return 0;
}