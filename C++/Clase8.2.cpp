#include <iostream>
using namespace std;
//Indique si un número n dado por el usuario, es primo o no. Usar for.
int main ()
{
	int n, contador;
	cout << "Ingrese el numero a revisar: \n";
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			contador++;
		}
	}
	if (contador==2)
	{
		cout << "Es primo";
	}
	else
	{
		cout << "No es primo";
	}
}