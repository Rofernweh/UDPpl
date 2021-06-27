#include <iostream>
using namespace std;
//Escriba un programa que verifique si un número es negativo, positivo o cero.
int main()
{
	int num;
	cout << "Ingrese un numero:";
	cin >> num;
	if (num < 0)
	{	
		cout << "El numero es negativo";
	}
	else if (num > 0)
	{
		cout << "El numero es positivo";
	}
	else if (num == 0)
	{
		cout << "El numero es cero";
	}

	return 0;
}