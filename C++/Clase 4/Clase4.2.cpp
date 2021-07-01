#include <iostream>
using namespace std;
//Cree un programa que dado un numero a, determine si es par o impar
int main()
{
	int a;
	cout << "Ingrese un numero: ";
	cin >> a;

	if (a%2 == 0)
	{
		cout << "El numero es par";
	} 
	else if (a%2 == 1)
	{
		cout << "El numero es impar";
	}
	else 
	{
	    cout << "El numero es incorrecto";
	}

	return 0;
}
