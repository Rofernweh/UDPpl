#include <iostream>
using namespace std;
//Cree un programa que le solicite al usuario un número entero. Luego muestre por pantalla un 0 si es que el número es un número par, o muestre un 1 si el número es impar
int main()
{	
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	cout << num%2;

	return 0;
}